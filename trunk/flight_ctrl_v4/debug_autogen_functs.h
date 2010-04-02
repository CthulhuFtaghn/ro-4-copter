#ifndef debug_autogen_functs_h
#define debug_autogen_functs_h
void debug_report_vars(Calibration * x)
{
	fprintf_P(&serstream, PSTR("0, int32_t (%d), f_mot_bot: %d\r\n"), (uint8_t)sizeof(int32_t), x->f_mot_bot);
	fprintf_P(&serstream, PSTR("1, int32_t (%d), b_mot_bot: %d\r\n"), (uint8_t)sizeof(int32_t), x->b_mot_bot);
	fprintf_P(&serstream, PSTR("2, int32_t (%d), l_mot_bot: %d\r\n"), (uint8_t)sizeof(int32_t), x->l_mot_bot);
	fprintf_P(&serstream, PSTR("3, int32_t (%d), r_mot_bot: %d\r\n"), (uint8_t)sizeof(int32_t), x->r_mot_bot);
	fprintf_P(&serstream, PSTR("4, int32_t (%d), f_mot_scale: %d\r\n"), (uint8_t)sizeof(int32_t), x->f_mot_scale);
	fprintf_P(&serstream, PSTR("5, int32_t (%d), b_mot_scale: %d\r\n"), (uint8_t)sizeof(int32_t), x->b_mot_scale);
	fprintf_P(&serstream, PSTR("6, int32_t (%d), l_mot_scale: %d\r\n"), (uint8_t)sizeof(int32_t), x->l_mot_scale);
	fprintf_P(&serstream, PSTR("7, int32_t (%d), r_mot_scale: %d\r\n"), (uint8_t)sizeof(int32_t), x->r_mot_scale);
	fprintf_P(&serstream, PSTR("8, int32_t (%d), roll_gyro_center: %d\r\n"), (uint8_t)sizeof(int32_t), x->roll_gyro_center);
	fprintf_P(&serstream, PSTR("9, int32_t (%d), pitch_gyro_center: %d\r\n"), (uint8_t)sizeof(int32_t), x->pitch_gyro_center);
	fprintf_P(&serstream, PSTR("10, int32_t (%d), yaw_gyro_center: %d\r\n"), (uint8_t)sizeof(int32_t), x->yaw_gyro_center);
	fprintf_P(&serstream, PSTR("11, int32_t (%d), roll_ppm_center: %d\r\n"), (uint8_t)sizeof(int32_t), x->roll_ppm_center);
	fprintf_P(&serstream, PSTR("12, int32_t (%d), pitch_ppm_center: %d\r\n"), (uint8_t)sizeof(int32_t), x->pitch_ppm_center);
	fprintf_P(&serstream, PSTR("13, int32_t (%d), yaw_ppm_center: %d\r\n"), (uint8_t)sizeof(int32_t), x->yaw_ppm_center);
	fprintf_P(&serstream, PSTR("14, int32_t (%d), throttle_ppm_center: %d\r\n"), (uint8_t)sizeof(int32_t), x->throttle_ppm_center);
	fprintf_P(&serstream, PSTR("15, int32_t (%d), roll_gyro_scale: %d\r\n"), (uint8_t)sizeof(int32_t), x->roll_gyro_scale);
	fprintf_P(&serstream, PSTR("16, int32_t (%d), pitch_gyro_scale: %d\r\n"), (uint8_t)sizeof(int32_t), x->pitch_gyro_scale);
	fprintf_P(&serstream, PSTR("17, int32_t (%d), yaw_gyro_scale: %d\r\n"), (uint8_t)sizeof(int32_t), x->yaw_gyro_scale);
	fprintf_P(&serstream, PSTR("18, int32_t (%d), throttle_ppm_scale: %d\r\n"), (uint8_t)sizeof(int32_t), x->throttle_ppm_scale);
	fprintf_P(&serstream, PSTR("19, int32_t (%d), throttle_hover: %d\r\n"), (uint8_t)sizeof(int32_t), x->throttle_hover);
	fprintf_P(&serstream, PSTR("20, int32_t (%d), roll_rate_kp: %d\r\n"), (uint8_t)sizeof(int32_t), x->roll_rate_kp);
	fprintf_P(&serstream, PSTR("21, int32_t (%d), roll_rate_ki: %d\r\n"), (uint8_t)sizeof(int32_t), x->roll_rate_ki);
	fprintf_P(&serstream, PSTR("22, int32_t (%d), roll_rate_kd: %d\r\n"), (uint8_t)sizeof(int32_t), x->roll_rate_kd);
	fprintf_P(&serstream, PSTR("23, int32_t (%d), pitch_rate_kp: %d\r\n"), (uint8_t)sizeof(int32_t), x->pitch_rate_kp);
	fprintf_P(&serstream, PSTR("24, int32_t (%d), pitch_rate_ki: %d\r\n"), (uint8_t)sizeof(int32_t), x->pitch_rate_ki);
	fprintf_P(&serstream, PSTR("25, int32_t (%d), pitch_rate_kd: %d\r\n"), (uint8_t)sizeof(int32_t), x->pitch_rate_kd);
	fprintf_P(&serstream, PSTR("26, int32_t (%d), yaw_kp: %d\r\n"), (uint8_t)sizeof(int32_t), x->yaw_kp);
	fprintf_P(&serstream, PSTR("27, int32_t (%d), yaw_ki: %d\r\n"), (uint8_t)sizeof(int32_t), x->yaw_ki);
	fprintf_P(&serstream, PSTR("28, int32_t (%d), yaw_kd: %d\r\n"), (uint8_t)sizeof(int32_t), x->yaw_kd);
	fprintf_P(&serstream, PSTR("29, uint8_t (%d), yaw_ppm_chan: %d\r\n"), (uint8_t)sizeof(uint8_t), x->yaw_ppm_chan);
	fprintf_P(&serstream, PSTR("30, uint8_t (%d), throttle_ppm_chan: %d\r\n"), (uint8_t)sizeof(uint8_t), x->throttle_ppm_chan);
	fprintf_P(&serstream, PSTR("31, uint8_t (%d), pitch_ppm_chan: %d\r\n"), (uint8_t)sizeof(uint8_t), x->pitch_ppm_chan);
	fprintf_P(&serstream, PSTR("32, uint8_t (%d), roll_ppm_chan: %d\r\n"), (uint8_t)sizeof(uint8_t), x->roll_ppm_chan);
	fprintf_P(&serstream, PSTR("33, uint8_t (%d), unlock_ppm_chan: %d\r\n"), (uint8_t)sizeof(uint8_t), x->unlock_ppm_chan);
	fprintf_P(&serstream, PSTR("34, uint8_t (%d), gyro_miscalibrate_threshold: %d\r\n"), (uint8_t)sizeof(uint8_t), x->gyro_miscalibrate_threshold);
	fprintf_P(&serstream, PSTR("35, int32_t (%d), filter_w: %d\r\n"), (uint8_t)sizeof(int32_t), x->filter_w);
	fprintf_P(&serstream, PSTR("36, uint32_t (%d), button_hold_down: %d\r\n"), (uint8_t)sizeof(uint32_t), x->button_hold_down);
}

#endif