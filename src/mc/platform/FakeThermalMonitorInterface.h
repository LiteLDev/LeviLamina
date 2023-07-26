#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FakeThermalMonitorInterface {

public:
    // prevent constructor by default
    FakeThermalMonitorInterface& operator=(FakeThermalMonitorInterface const&) = delete;
    FakeThermalMonitorInterface(FakeThermalMonitorInterface const&)            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?getThermalState\@FakeThermalMonitorInterface\@\@UEBA?AW4ThermalState\@\@XZ
     */
    virtual enum class ThermalState getThermalState() const; // NOLINT
    /**
     * @vftbl 2
     * @symbol ?getThermalValueCelsius\@FakeThermalMonitorInterface\@\@UEBAMXZ
     */
    virtual float getThermalValueCelsius() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?isLowBatteryModeEnabled\@FakeThermalMonitorInterface\@\@UEBA_NXZ
     */
    virtual bool isLowBatteryModeEnabled() const; // NOLINT
    /**
     * @symbol ??0FakeThermalMonitorInterface\@\@QEAA\@XZ
     */
    MCAPI FakeThermalMonitorInterface(); // NOLINT
};
