#ifndef _FOSSASAT_SENSORS_H
#define _FOSSASAT_SENSORS_H

#include "FossaSat2.h"

void Sensors_Temperature_Setup(wireSensor_t& sensor);
float Sensors_Temperature_Read(wireSensor_t& sensor);

uint16_t Sensors_IMU_Setup();
void Sensors_IMU_Update();
void Sensors_IMU_Sleep(bool sleep);

bool Sensors_Current_Setup(Adafruit_INA260& sensor, TwoWire& wire, uint8_t addr);
float Sensors_Current_Read(Adafruit_INA260& sensor);
float Sensors_Current_ReadVoltage(Adafruit_INA260& sensor);

bool Sensors_Setup_Light(lightSensor_t& sensor);
float Sensors_Read_Light(lightSensor_t& sensor);

#endif
