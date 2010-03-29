#ifndef calibration_struct_h
#define calibration_struct_h

// Var count: 57

typedef struct Calibration_{
	int32_t f_mot_bot;
	int32_t b_mot_bot;
	int32_t l_mot_bot;
	int32_t r_mot_bot;
	int32_t f_mot_scale;
	int32_t b_mot_scale;
	int32_t l_mot_scale;
	int32_t r_mot_scale;
	uint8_t motor_mode;
	int32_t yaw_gyro_scale;
	int32_t roll_accel_bot;
	int32_t roll_accel_center;
	int32_t roll_accel_top;
	int32_t pitch_accel_bot;
	int32_t pitch_accel_center;
	int32_t pitch_accel_top;
	int32_t vert_accel_bot;
	int32_t vert_accel_top;
	int32_t roll_gyro_center;
	int32_t pitch_gyro_center;
	int32_t yaw_gyro_center;
	int32_t pitch_angle_offset;
	int32_t roll_angle_offset;
	int32_t pitch_gyro_to_rate;
	int32_t roll_gyro_to_rate;
	int32_t roll_ppm_center;
	int32_t pitch_ppm_center;
	int32_t yaw_ppm_center;
	int32_t throttle_ppm_center;
	int32_t roll_ppm_scale;
	int32_t pitch_ppm_scale;
	int32_t yaw_ppm_scale;
	int32_t throttle_ppm_scale;
	int32_t throttle_hover;
	int32_t roll_level_kp;
	int32_t roll_level_ki;
	int32_t roll_level_kd;
	int32_t pitch_level_kp;
	int32_t pitch_level_ki;
	int32_t pitch_level_kd;
	int32_t roll_rate_kp;
	int32_t roll_rate_ki;
	int32_t roll_rate_kd;
	int32_t pitch_rate_kp;
	int32_t pitch_rate_ki;
	int32_t pitch_rate_kd;
	int32_t yaw_kp;
	int32_t yaw_ki;
	int32_t yaw_kd;
	uint8_t yaw_ppm_chan;
	uint8_t throttle_ppm_chan;
	uint8_t pitch_ppm_chan;
	uint8_t roll_ppm_chan;
	uint8_t unlock_ppm_chan;
	int32_t delta_time_const;
	int32_t comp_filter_w;
	uint32_t button_hold_down;
} Calibration;

#endif
