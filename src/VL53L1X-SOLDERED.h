/**
 **************************************************
 *
 * @file        Generic-easyC-SOLDERED.h
 * @brief       Header file for sensor specific code.
 *
 *
 * @copyright   GNU General Public License v3.0
 * @authors     @ soldered.com, Robert Peric
 ***************************************************/

#ifndef _VL53_L1X_H
#define _VL53_L1X_H

#include "Arduino.h"
#include "libs/vl53l1x-arduino/VL53L1X.h"

class VL53_L1X : public VL53L1X
{
  public:
    VL53_L1X();

    void begin()
    {
        Wire.begin();
        VL53_L1X::init();
    }
};

#endif
