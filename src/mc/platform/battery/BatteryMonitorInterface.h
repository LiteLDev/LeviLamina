#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/battery/BatteryStatus.h"

class BatteryMonitorInterface {
public:
    // prevent constructor by default
    BatteryMonitorInterface& operator=(BatteryMonitorInterface const&);
    BatteryMonitorInterface(BatteryMonitorInterface const&);
    BatteryMonitorInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BatteryMonitorInterface() = default;

    // vIndex: 1
    virtual ::BatteryStatus getBatteryStatus() const = 0;

    // vIndex: 2
    virtual float getBatteryLevel() const = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
