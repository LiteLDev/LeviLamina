#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BatteryStatus.h"

class BatteryMonitorInterface {
public:
    // prevent constructor by default
    BatteryMonitorInterface& operator=(BatteryMonitorInterface const&) = delete;
    BatteryMonitorInterface(BatteryMonitorInterface const&)            = delete;
    BatteryMonitorInterface()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getBatteryStatus@FakeBatteryMonitorInterface@@UEBA?AW4BatteryStatus@@XZ
    virtual ::BatteryStatus getBatteryStatus() const = 0;

    // vIndex: 2, symbol: ?getBatteryLevel@FakeBatteryMonitorInterface@@UEBAMXZ
    virtual float getBatteryLevel() const = 0;

    // NOLINTEND
};
