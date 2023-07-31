#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FakeBatteryMonitorInterface {

public:
    // prevent constructor by default
    FakeBatteryMonitorInterface& operator=(FakeBatteryMonitorInterface const&) = delete;
    FakeBatteryMonitorInterface(FakeBatteryMonitorInterface const&)            = delete;

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
    virtual enum class BatteryStatus getBatteryStatus() const;
    /**
     * @vftbl 2
     * @symbol ?getBatteryLevel\@FakeBatteryMonitorInterface\@\@UEBAMXZ
     */
    virtual float getBatteryLevel() const;
    /**
     * @symbol ??0FakeBatteryMonitorInterface\@\@QEAA\@XZ
     */
    MCAPI FakeBatteryMonitorInterface();
    // NOLINTEND
};
