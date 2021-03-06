// bowser_key.c.inc

struct ObjectHitbox sBowserKeyHitbox = {
    /* interactType: */ INTERACT_STAR_OR_KEY,
    /* downOffset: */ 0,
    /* damageOrCoinValue: */ 0,
    /* health: */ 0,
    /* numLootCoins: */ 0,
    /* radius: */ 160,
    /* height: */ 100,
    /* hurtboxRadius: */ 160,
    /* hurtboxHeight: */ 100,
};

void bhv_bowser_key_loop(void)
{
	obj_scale(0.5f);

	if(o->oAngleVelYaw > 0x400)
		o->oAngleVelYaw -= 0x100 / FRAME_RATE_SCALER_INV;

	o->oFaceAngleYaw += o->oAngleVelYaw * FRAME_RATE_SCALER;
	o->oFaceAngleRoll = -0x4000;
	o->oGraphYOffset  = 165.0f;

	if(o->oAction == 0)
	{
		if(o->oTimer == 0)
			o->oVelY = 70.0f;

		spawn_sparkle_particles(3, 200, 80, -60);
		spawn_object(o, MODEL_NONE, sm64::bhv::bhvSparkleSpawn());
		obj_update_floor_and_walls();
		obj_move_standard(78);

		if(o->oMoveFlags & OBJ_MOVE_ON_GROUND)
			o->oAction++;
		else if(o->oMoveFlags & OBJ_MOVE_LANDED)
#ifndef VERSION_JP
			PlaySound2(SOUND_GENERAL_UNKNOWN3_2);
#else
			PlaySound2(SOUND_GENERAL_UNKNOWN3_LOWPRIO);
#endif
	}
	else
	{
		set_object_hitbox(o, &sBowserKeyHitbox);

		if(o->oInteractStatus & INT_STATUS_INTERACTED)
		{
			mark_obj_for_deletion(o);
			o->oInteractStatus = 0;
		}
	}
}
