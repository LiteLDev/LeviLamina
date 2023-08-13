#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ThermalMonitorInterface {

public:
    // prevent constructor by default
    ThermalMonitorInterface& operator=(ThermalMonitorInterface const&) = delete;
    ThermalMonitorInterface(ThermalMonitorInterface const&)            = delete;
    ThermalMonitorInterface()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getThermalState\@FakeThermalMonitorInterface\@\@UEBA?AW4ThermalState\@\@XZ
     */
    virtual enum class ThermalState getThermalState() const = 0;
    /**
     * @vftbl 2
     * @symbol ?getThermalValueCelsius\@FakeThermalMonitorInterface\@\@UEBAMXZ
     */
    virtual float getThermalValueCelsius() const = 0;
    /**
     * @vftbl 3
     * @symbol ?isLowBatteryModeEnabled\@FakeThermalMonitorInterface\@\@UEBA_NXZ
     */
    virtual bool isLowBatteryModeEnabled() const = 0;
    // NOLINTEND
};
