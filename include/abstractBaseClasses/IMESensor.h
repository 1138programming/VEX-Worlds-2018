#ifndef _SHAFT_ENCODER_H
#define _SHAFT_ENCODER_H

#include "main.h"
#include "abstractBaseClasses/Sensor.h"

class IMESensor: public Sensor {
  private:
    unsigned int i2cAddress;
  public:
    int getSensorValue();
    IMESensor(int address);
};

#endif
