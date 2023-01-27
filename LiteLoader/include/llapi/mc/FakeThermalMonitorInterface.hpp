/**
 * @file  FakeThermalMonitorInterface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  __unk_destructor_0
     */
    virtual ~FakeThermalMonitorInterface();
    /**
     * @hash   1632443797
     * @vftbl  1
     * @symbol  ?getThermalState\@FakeThermalMonitorInterface\@\@UEBA?AW4ThermalState\@\@XZ
     */
    virtual enum class ThermalState getThermalState() const;
    /**
     * @hash   -844392677
     * @vftbl  2
     * @symbol  ?getThermalValueCelsius\@FakeThermalMonitorInterface\@\@UEBAMXZ
     */
    virtual float getThermalValueCelsius() const;
    /**
     * @hash   -114290222
     * @vftbl  3
     * @symbol  ?isLowBatteryModeEnabled\@FakeThermalMonitorInterface\@\@UEBA_NXZ
     */
    virtual bool isLowBatteryModeEnabled() const;
    /**
     * @hash   -185654323
     * @symbol  ??0FakeThermalMonitorInterface\@\@QEAA\@XZ
     */
    MCAPI FakeThermalMonitorInterface();

};