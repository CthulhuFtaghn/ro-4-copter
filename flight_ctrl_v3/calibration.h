#ifndef calibration_h
#define calibration_h

#include <stdint.h>

#include "calibration_struct.h"

void calibration_default(Calibration *);
void calibration_save(Calibration *);
uint8_t calibration_load(Calibration *);
void calibration_write(Calibration *, int32_t, int32_t);

#endif