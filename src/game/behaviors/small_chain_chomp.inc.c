
/**
 * Behavior for bhvChainChomp, bhvChainChompChainPart, bhvWoodenPost, and bhvChainChompGate.
 * bhvChainChomp spawns its bhvWoodenPost in its behavior script. It spawns 5 chain
 * parts. Part 0 is the "pivot", which is positioned at the wooden post while
 * the chomp is chained up. Parts 1-4 are the other parts, starting from the
 * chain chomp and moving toward the pivot.
 * Processing order is bhvWoodenPost, bhvChainChompGate, bhvChainChomp, bhvChainChompChainPart.
 * The chain parts are processed starting at the post and ending at the chomp.
 */

#define CHAIN_CHOMP_CHAIN_MAX_DIST_BETWEEN_PARTS 180.0f

#define CHAIN_CHOMP_LOAD_DIST   (3000.0f + (2 * CHAIN_CHOMP_CHAIN_MAX_DIST_BETWEEN_PARTS))
#define CHAIN_CHOMP_UNLOAD_DIST (4000.0f + (2 * CHAIN_CHOMP_CHAIN_MAX_DIST_BETWEEN_PARTS))

/**
 * Hitbox for chain chomp.
 */
static struct ObjectHitbox sSmallChainChompHitbox = {
    /* interactType:      */ INTERACT_MR_BLIZZARD,
    /* downOffset:        */ 0,
    /* damageOrCoinValue: */ 1,
    /* health:            */ 1,
    /* numLootCoins:      */ 0,
    /* radius:            */ 40,
    /* height:            */ 80,
    /* hurtboxRadius:     */ 40,
    /* hurtboxHeight:     */ 80,
};

/**
 * Update function for chain chomp part / pivot.
 */
void bhv_small_chain_chompchain_part_update(void) {
    if (o->parentObj->oAction == CHAIN_CHOMP_ACT_UNLOAD_CHAIN) {
        obj_mark_for_deletion(o);
    } else if (o->oBehParams2ndByte != CHAIN_CHOMP_CHAIN_PART_BP_PIVOT) {
        struct ChainSegment *segment = &o->parentObj->oChainChompSegments[o->oBehParams2ndByte];

        // Set position relative to the pivot
        vec3f_sum(&o->oPosVec, &o->parentObj->parentObj->oPosVec, segment->pos);
    } else if (o->parentObj->oChainChompReleaseStatus != CHAIN_CHOMP_NOT_RELEASED) {
        cur_obj_update_floor_and_walls();
        cur_obj_move_standard(78);
    }
}

/**
 * When mario gets close enough, allocate chain segments and spawn their objects.
 */
static void small_chain_chomp_act_uninitialized(void) {
    struct ChainSegment *segments;
    s32 i;

    if (o->oDistanceToMario < CHAIN_CHOMP_LOAD_DIST) {
        segments = mem_pool_alloc(gObjectMemoryPool, 2 * sizeof(struct ChainSegment));
        if (segments != NULL) {
            // Each segment represents the offset of a chain part to the pivot.
            // Segment 0 connects the pivot to the chain chomp itself. Segment
            // 1 connects the pivot to the chain part next to the chain chomp
            // (chain part 1), etc.
            o->oChainChompSegments = segments;
            for (i = 0; i < 2; i++) {
                chain_segment_init(&segments[i]);
            }

            cur_obj_set_pos_to_home();

            // Spawn the pivot and set to parent
            o->parentObj = spawn_object(o, CHAIN_CHOMP_CHAIN_PART_BP_PIVOT, bhvChainChompChainPart);
            if (o->parentObj != NULL) {
                // Spawn the non-pivot chain parts, starting from the chain
                // chomp and moving toward the pivot
                for (i = 1; i < 2; i++) {
                    spawn_object_relative(i, 0, 0, 0, o, MODEL_METALLIC_BALL, bhvChainChompChainPart);
                }

                o->oAction = CHAIN_CHOMP_ACT_MOVE;
                cur_obj_unhide();
            }
        }
    }
}

/**
 * Apply gravity to each chain part, and cap its distance to the previous
 * part as well as from the pivot.
 */
static void small_chain_chomp_update_chain_segments(void) {
    // Segment 0 connects the pivot to the chain chomp itself, and segment i>0
    // connects the pivot to chain part i (1 is closest to the chain chomp).
    s32 i;
    for (i = 1; i < 2; i++) {
        struct ChainSegment *prevSegment = &o->oChainChompSegments[i - 1];
        struct ChainSegment *segment     = &o->oChainChompSegments[i];

        // Apply gravity
        segment->pos[1] += o->oVelY < 0.0f ? o->oVelY : -20.0f;
        if (segment->pos[1] < 0.0f) {
            segment->pos[1] = 0.0f;
        }

        // Cap distance to previous chain part (so that the tail follows the chomp)
        Vec3f offset;
        vec3f_diff(offset, segment->pos, prevSegment->pos);
        vec3_normalize_max(offset, o->oChainChompMaxDistBetweenChainParts);

        // Cap distance to pivot (so that it stretches when the chomp moves far from the wooden post)
        vec3f_add(offset, prevSegment->pos);
        f32 maxTotalDist = o->oChainChompMaxDistFromPivotPerChainPart * (2 - i);
        vec3_normalize_max(offset, maxTotalDist);

        vec3f_copy(segment->pos, offset);
    }
}

/**
 * Lunging increases the maximum distance from the pivot and changes the maximum
 * distance between chain parts. Restore these values to normal.
 */
static void small_chain_chomp_restore_normal_chain_lengths(void) {
    // approach_f32_ptr(&o->oChainChompMaxDistFromPivotPerChainPart, 750.0f / 2, 4.0f);
    approach_f32_ptr(&o->oChainChompMaxDistFromPivotPerChainPart, 150.0f, 4.0f);
    o->oChainChompMaxDistBetweenChainParts = o->oChainChompMaxDistFromPivotPerChainPart;
}

/**
 * Turn toward mario. Wait a bit and then enter the lunging sub-action.
 */
static void small_chain_chomp_sub_act_turn(void) {
    o->oGravity = -4.0f;

    small_chain_chomp_restore_normal_chain_lengths();
    obj_move_pitch_approach(0, 0x100);

    if (o->oMoveFlags & OBJ_MOVE_MASK_ON_GROUND) {
        cur_obj_rotate_yaw_toward(o->oAngleToMario, 0x400);
        if (abs_angle_diff(o->oAngleToMario, o->oMoveAngleYaw) < 0x800) {
            if (o->oTimer > 30) {
                if (cur_obj_check_anim_frame(0)) {
                    cur_obj_reverse_animation();
                    if (o->oTimer > 40) {
                        // Increase the maximum distance from the pivot and enter
                        // the lunging sub-action.
                        cur_obj_play_sound_2(SOUND_GENERAL_SMALL_CHAIN_CHOMP2);

                        o->oSubAction = CHAIN_CHOMP_SUB_ACT_LUNGE;
                        // o->oChainChompMaxDistFromPivotPerChainPart = 900.0f / 2;
                        o->oChainChompMaxDistFromPivotPerChainPart = CHAIN_CHOMP_CHAIN_MAX_DIST_BETWEEN_PARTS;
                        o->oForwardVel = 140.0f;
                        o->oVelY = 20.0f;
                        o->oGravity = 0.0f;
                        o->oChainChompTargetPitch = obj_get_pitch_from_vel();
                    }
                } else {
                    o->oTimer--;
                }
            } else {
                o->oForwardVel = 0.0f;
            }
        } else {
            cur_obj_play_sound_2(SOUND_GENERAL_SMALL_CHAIN_CHOMP1);
            o->oForwardVel = 10.0f;
            o->oVelY = 20.0f;
        }
    } else {
        cur_obj_rotate_yaw_toward(o->oAngleToMario, 400);
        o->oTimer = 0;
    }
}

static void small_chain_chomp_sub_act_lunge(void) {
    obj_face_pitch_approach(o->oChainChompTargetPitch, 0x400);

    if (o->oForwardVel != 0.0f) {
        // f32 val04;

        if (o->oChainChompRestrictedByChain) {
            o->oForwardVel = o->oVelY = 0.0f;
            o->oChainChompSignedMaxDistBetweenChainParts = 30.0f;
        }

        // // TODO: What is this
        // if ((val04 = (900.0f - o->oChainChompDistToPivot)) > 220.0f) {
        //     val04 = 220.0f;
        // }

        // o->oChainChompMaxDistBetweenChainParts =
        //     ((val04 / 220.0f) * o->oChainChompMaxDistFromPivotPerChainPart);
        o->oTimer = 0;
    } else {
        // Turn toward pivot
        cur_obj_rotate_yaw_toward(atan2s(o->oChainChompSegments[0].pos[2], o->oChainChompSegments[0].pos[0]), 0x1000);

        if (o->oChainChompSignedMaxDistBetweenChainParts != 0.0f) {
            approach_f32_ptr(&o->oChainChompSignedMaxDistBetweenChainParts, 0.0f, 0.8f);
        } else {
            o->oSubAction = CHAIN_CHOMP_SUB_ACT_TURN;
        }

        o->oChainChompMaxDistBetweenChainParts = o->oChainChompSignedMaxDistBetweenChainParts;
        if (gGlobalTimer % 2 != 0) {
            o->oChainChompMaxDistBetweenChainParts = -o->oChainChompSignedMaxDistBetweenChainParts;
        }
    }

    if (o->oTimer < 30) {
        cur_obj_reverse_animation();
    }
}

/**
 * Lunge 4 times, each time moving toward mario +/- 0x2000 angular units.
 * Finally, begin a lunge toward x=1450, z=562 (near the gate).
 */
static void small_chain_chomp_released_lunge_around(void) {
    small_chain_chomp_restore_normal_chain_lengths();

    // Finish bounce
    if (o->oMoveFlags & OBJ_MOVE_MASK_ON_GROUND) {
        // Before first bounce, turn toward mario and wait 2 seconds
        if (o->oChainChompNumLunges == 0) {
            if (cur_obj_rotate_yaw_toward(o->oAngleToMario, 800)) {
                if (o->oTimer > 60) {
                    o->oChainChompNumLunges++;
                    // enable wall collision
                    o->oWallHitboxRadius = 200.0f;
                }
            } else {
                o->oTimer = 0;
            }
        } else {
            if (++o->oChainChompNumLunges <= 5) {
                cur_obj_play_sound_2(SOUND_GENERAL_SMALL_CHAIN_CHOMP1);
                o->oMoveAngleYaw = o->oAngleToMario + random_sign() * 0x2000;
                o->oForwardVel = 30.0f;
                o->oVelY = 50.0f;
            } else {
                o->oChainChompReleaseStatus = CHAIN_CHOMP_RELEASED_BREAK_GATE;
                o->oHomeX = 1450.0f;
                o->oHomeZ = 562.0f;
                o->oMoveAngleYaw = cur_obj_angle_to_home();
                o->oForwardVel = cur_obj_lateral_dist_to_home() / 8;
                o->oVelY = 50.0f;
            }
        }
    }
}

/**
 * Continue lunging until a wall collision occurs. Mark the gate as destroyed,
 * wait for the chain chomp to land, and then begin a jump toward the final
 * target, x=3288, z=-1770.
 */
static void small_chain_chomp_released_break_gate(void) {
    if (!o->oChainChompHitGate) {
        // If hit wall, assume it's the gate and bounce off of it
        //! The wall may not be the gate
        //! If the chain chomp gets stuck, it may never hit a wall, resulting
        //  in a softlock
        if (o->oMoveFlags & OBJ_MOVE_HIT_WALL) {
            o->oChainChompHitGate = TRUE;
            o->oMoveAngleYaw = cur_obj_reflect_move_angle_off_wall();
            o->oForwardVel *= 0.4f;
        }
    } else if (o->oMoveFlags & OBJ_MOVE_MASK_ON_GROUND) {
        o->oChainChompReleaseStatus = CHAIN_CHOMP_RELEASED_JUMP_AWAY;
        o->oHomeX = 3288.0f;
        o->oHomeZ = -1770.0f;
        o->oMoveAngleYaw = cur_obj_angle_to_home();
        o->oForwardVel = cur_obj_lateral_dist_to_home() / 50.0f;
        o->oVelY = 120.0f;
    }
}

/**
 * All chain chomp movement behavior, including the cutscene after being
 * released.
 */
static void small_chain_chomp_act_move(void) {
    f32 maxDistToPivot;

    // Unload chain if mario is far enough
    if (o->oChainChompReleaseStatus == CHAIN_CHOMP_NOT_RELEASED && o->oDistanceToMario > CHAIN_CHOMP_UNLOAD_DIST) {
        o->oAction = CHAIN_CHOMP_ACT_UNLOAD_CHAIN;
        o->oForwardVel = o->oVelY = 0.0f;
    } else {
        cur_obj_update_floor_and_walls();

        switch (o->oChainChompReleaseStatus) {
            case CHAIN_CHOMP_NOT_RELEASED:
                switch (o->oSubAction) {
                    case CHAIN_CHOMP_SUB_ACT_TURN:
                        small_chain_chomp_sub_act_turn();
                        break;
                    case CHAIN_CHOMP_SUB_ACT_LUNGE:
                        small_chain_chomp_sub_act_lunge();
                        break;
                }
                break;
        }

        cur_obj_move_standard(78);

        // Segment 0 connects the pivot to the chain chomp itself
        vec3_diff(o->oChainChompSegments[0].pos, &o->oPosVec, &o->parentObj->oPosVec);

        o->oChainChompDistToPivot = vec3_mag(o->oChainChompSegments[0].pos);

        // If the chain is fully stretched
        maxDistToPivot = o->oChainChompMaxDistFromPivotPerChainPart * 2;
        if (o->oChainChompDistToPivot > maxDistToPivot) {
            f32 ratio = maxDistToPivot / o->oChainChompDistToPivot;
            o->oChainChompDistToPivot = maxDistToPivot;

            vec3_mul_val(o->oChainChompSegments[0].pos, ratio);

            if (o->oChainChompReleaseStatus == CHAIN_CHOMP_NOT_RELEASED) {
                // Restrict chain chomp position
                vec3f_sum(&o->oPosVec, &o->parentObj->oPosVec, o->oChainChompSegments[0].pos);

                o->oChainChompRestrictedByChain = TRUE;
            } else {
                // Move pivot like the chain chomp is pulling it along
                f32 oldPivotY = o->parentObj->oPosY;
                vec3_diff(&o->parentObj->oPosVec, &o->oPosVec, o->oChainChompSegments[0].pos);
                o->parentObj->oVelY = o->parentObj->oPosY - oldPivotY;
            }
        } else {
            o->oChainChompRestrictedByChain = FALSE;
        }

        small_chain_chomp_update_chain_segments();

        // Begin a lunge if mario tries to attack
        if (obj_check_attacks(&sSmallChainChompHitbox, o->oAction) != 0) {
            o->oSubAction = CHAIN_CHOMP_SUB_ACT_LUNGE;
            // o->oChainChompMaxDistFromPivotPerChainPart = (900.0f / 2);
            o->oChainChompMaxDistFromPivotPerChainPart = CHAIN_CHOMP_CHAIN_MAX_DIST_BETWEEN_PARTS; // ((2 * CHAIN_CHOMP_CHAIN_MAX_DIST_BETWEEN_PARTS) / 2);
            o->oForwardVel = 0.0f;
            o->oVelY = 300.0f;
            o->oGravity = -4.0f;
            o->oChainChompTargetPitch = -0x3000;
        }
    }
}

/**
 * Hide and free the chain chomp segments. The chain objects will unload
 * themselves when they see that the chain chomp is in this action.
 */
static void small_chain_chomp_act_unload_chain(void) {
    cur_obj_hide();
    mem_pool_free(gObjectMemoryPool, o->oChainChompSegments);

    o->oAction = CHAIN_CHOMP_ACT_UNINITIALIZED;

    if (o->oChainChompReleaseStatus != CHAIN_CHOMP_NOT_RELEASED) {
        obj_mark_for_deletion(o);
    }
}

/**
 * Update function for chain chomp.
 */
void bhv_small_chain_chomp_update(void) {
    switch (o->oAction) {
        case CHAIN_CHOMP_ACT_UNINITIALIZED:
            small_chain_chomp_act_uninitialized();
            break;
        case CHAIN_CHOMP_ACT_MOVE:
            small_chain_chomp_act_move();
            break;
        case CHAIN_CHOMP_ACT_UNLOAD_CHAIN:
            small_chain_chomp_act_unload_chain();
            break;
    }
}

/**
 * Update function for wooden post.
 */
void bhv_small_wooden_post_update(void) {

    if (o->oWoodenPostOffsetY != 0.0f) {
        o->oPosY = o->oHomeY + o->oWoodenPostOffsetY;
    } else if (!GET_BPARAM3(o->oBehParams)) { // Whether the post has coins or not
        // Reset the timer once mario is far enough
        if (o->oDistanceToMario > 400.0f) {
            o->oTimer = o->oWoodenPostTotalMarioAngle = 0;
        } else {
            // When mario runs around the post 3 times within 200 frames, spawn
            // coins
            o->oWoodenPostTotalMarioAngle += (s16)(o->oAngleToMario - o->oWoodenPostPrevAngleToMario);
            if (absi(o->oWoodenPostTotalMarioAngle) > 0x30000 && o->oTimer < 200) {
                obj_spawn_loot_yellow_coins(o, 5, 20.0f);
                set_object_respawn_info_bits(o, RESPAWN_INFO_TYPE_NORMAL);
            }
        }

        o->oWoodenPostPrevAngleToMario = o->oAngleToMario;
    }
}

/**
 * Init function for chain chomp gate.
 */
void bhv_small_chain_chompgate_init(void) {
    o->parentObj = cur_obj_nearest_object_with_behavior(bhvChainChomp);
}

/**
 * Update function for chain chomp gate
 */
void bhv_small_chain_chompgate_update(void) {
    if (o->parentObj->oChainChompHitGate) {
        spawn_mist_particles_with_sound(SOUND_GENERAL_WALL_EXPLOSION);
        set_camera_shake_from_point(SHAKE_POS_SMALL, o->oPosX, o->oPosY, o->oPosZ);
        spawn_mist_particles_variable(0, 0x7F, 200.0f);
        spawn_triangle_break_particles(30, MODEL_DIRT_ANIMATION, 3.0f, 4);
        obj_mark_for_deletion(o);
    }
}

#undef CHAIN_CHOMP_CHAIN_MAX_DIST_BETWEEN_PARTS
#undef CHAIN_CHOMO_LOAD_DIST
#undef CHAIN_CHOMO_UNLOAD_DIST