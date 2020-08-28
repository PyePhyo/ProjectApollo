#ifndef SENSOR_MANAGER_H
#define SENSOR_MANAGER_H

#include "Sensor.h"
#include "BME280.h"
#include "Shtc3.h"
#include "Hdc2080.h"
#include "HTU21D.h"
#include "MPRLS.h"
#include "Tcs34725.h"

extern Bme bme280_1;
extern Bme bme280_2;
extern Shtc3 shtc3;
extern Hdc2080 hdc2080_1;
extern Hdc2080 hdc2080_2;
extern Htu21d htu21d;

extern Tcs34725 tcs34725;
extern Tcs34725* color_sensor;

extern Sensor* in_pressure_sensor;
extern Sensor* out_pressure_sensor;
extern Sensor* ambient_sensor;
extern Sensor* intake_sensor;
extern Sensor* desiccant_sensor;
extern Sensor* output_sensor;

extern Sensor* installed_sensors[10];
extern size_t installed_sensor_count;

void sensor_setup();
void sensor_run();

#endif // SENSOR_MANAGER_H
