#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/thermal/ThermalState.h"

class ThermalMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ThermalMonitorInterface() = default;

    // vIndex: 1
    virtual ::ThermalState getThermalState() const = 0;

    // vIndex: 2
    virtual float getThermalValueCelsius() const = 0;

    // vIndex: 3
    virtual bool isLowBatteryModeEnabled() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
