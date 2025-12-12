#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/thermal/ThermalState.h"

class ThermalMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ThermalMonitorInterface() = default;

    virtual ::ThermalState getThermalState() const = 0;

    virtual float getThermalValueCelsius() const = 0;

    virtual bool isLowBatteryModeEnabled() const = 0;
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
