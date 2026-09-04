#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/thermal/ThermalMonitorInterface.h"
#include "mc/platform/thermal/ThermalState.h"

class FakeThermalMonitorInterface : public ::ThermalMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FakeThermalMonitorInterface() /*override*/ = default;

    virtual ::ThermalState getThermalState() const /*override*/;

    virtual float getThermalValueCelsius() const /*override*/;

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
