// water_wave.c.inc

void bhv_object_water_wave_init(void)
{
	o->oPosY = find_water_level(o->oPosX, o->oPosZ);
}

void bhv_object_water_wave_loop(void)
{
	s32 globalTimer = gGlobalTimer;

	if((globalTimer % (16 * FRAME_RATE_SCALER_INV)) == 0)
		o->activeFlags = 0;
}
