/**
 * @file  FakeThermalMonitorInterface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FakeThermalMonitorInterface.
 *
 */
class FakeThermalMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKETHERMALMONITORINTERFACE
public:
    class FakeThermalMonitorInterface& operator=(class FakeThermalMonitorInterface const &) = delete;
    FakeThermalMonitorInterface(class FakeThermalMonitorInterface const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FakeThermalMonitorInterface();
    /**
     * @hash   1535821013
     * @vftbl  1
     * @symbol ?getThermalState@FakeThermalMonitorInterface@@UEBA?AW4ThermalState@@XZ
     */
    virtual enum class ThermalState getThermalState() const;
    /**
     * @hash   749163
     * @vftbl  2
     * @symbol ?getThermalValueCelsius@FakeThermalMonitorInterface@@UEBAMXZ
     */
    virtual float getThermalValueCelsius() const;
    /**
     * @hash   -214910766
     * @vftbl  3
     * @symbol ?isLowBatteryModeEnabled@FakeThermalMonitorInterface@@UEBA_NXZ
     */
    virtual bool isLowBatteryModeEnabled() const;
    /**
     * @hash   659487517
     * @symbol ??0FakeThermalMonitorInterface@@QEAA@XZ
     */
    MCAPI FakeThermalMonitorInterface();

};