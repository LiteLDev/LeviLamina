#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/battery/BatterySaverMode.h"
#include "mc/platform/battery/BatteryStatus.h"

class BatteryMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BatteryMonitorInterface() = default;

    virtual ::BatteryStatus getBatteryStatus() const = 0;

    virtual float getBatteryLevel() const = 0;

    virtual ::BatterySaverMode getBatterySaverMode() const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BatterySaverMode $getBatterySaverMode() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
