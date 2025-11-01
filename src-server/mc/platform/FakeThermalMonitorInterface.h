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
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ThermalState $getThermalState() const;

    MCNAPI float $getThermalValueCelsius() const;

    MCNAPI bool $isLowBatteryModeEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
