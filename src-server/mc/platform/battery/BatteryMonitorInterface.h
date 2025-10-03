#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/battery/BatteryStatus.h"

class BatteryMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BatteryMonitorInterface() = default;

    // vIndex: 1
    virtual ::BatteryStatus getBatteryStatus() const = 0;

    // vIndex: 2
    virtual float getBatteryLevel() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
