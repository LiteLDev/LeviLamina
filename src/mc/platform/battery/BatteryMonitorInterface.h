#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BatteryMonitorInterface {

public:
    // prevent constructor by default
    BatteryMonitorInterface& operator=(BatteryMonitorInterface const&) = delete;
    BatteryMonitorInterface(BatteryMonitorInterface const&)            = delete;
    BatteryMonitorInterface()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?getBatteryStatus\@FakeBatteryMonitorInterface\@\@UEBA?AW4BatteryStatus\@\@XZ
     */
    virtual enum class BatteryStatus getBatteryStatus() const = 0;
    /**
     * @vftbl 2
     * @symbol ?getBatteryLevel\@FakeBatteryMonitorInterface\@\@UEBAMXZ
     */
    virtual float getBatteryLevel() const = 0;
    // NOLINTEND
};
