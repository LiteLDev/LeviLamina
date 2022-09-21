/**
 * @file  MC/FakeBatteryMonitorInterface.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FakeBatteryMonitorInterface.
 *
 */
class FakeBatteryMonitorInterface {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FAKEBATTERYMONITORINTERFACE
public:
    class FakeBatteryMonitorInterface& operator=(class FakeBatteryMonitorInterface const &) = delete;
    FakeBatteryMonitorInterface(class FakeBatteryMonitorInterface const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~FakeBatteryMonitorInterface();
    /**
     * @hash   -36210711
     * @vftbl  1
     * @symbol ?getBatteryStatus@FakeBatteryMonitorInterface@@UEBA?AW4BatteryStatus@@XZ
     */
    virtual enum BatteryStatus getBatteryStatus() const;
    /**
     * @hash   1037348148
     * @vftbl  2
     * @symbol ?getBatteryLevel@FakeBatteryMonitorInterface@@UEBAMXZ
     */
    virtual float getBatteryLevel() const;
    /**
     * @hash   -707346253
     * @symbol ??0FakeBatteryMonitorInterface@@QEAA@XZ
     */
    MCAPI FakeBatteryMonitorInterface();

};