#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/thermal/ThermalMonitorInterface.h"
#include "mc/platform/thermal/ThermalState.h"

class FakeThermalMonitorInterface : public ::ThermalMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FakeThermalMonitorInterface() /*override*/ = default;

    // vIndex: 1
    virtual ::ThermalState getThermalState() const /*override*/;

    // vIndex: 2
    virtual float getThermalValueCelsius() const /*override*/;

    // vIndex: 3
    virtual bool isLowBatteryModeEnabled() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::ThermalState $getThermalState() const;

    MCFOLD float $getThermalValueCelsius() const;

    MCFOLD bool $isLowBatteryModeEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
