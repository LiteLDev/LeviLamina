#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/thermal/ThermalMonitorInterface.h"
#include "mc/platform/thermal/ThermalState.h"

class FakeThermalMonitorInterface : public ::ThermalMonitorInterface {
public:
    // prevent constructor by default
    FakeThermalMonitorInterface& operator=(FakeThermalMonitorInterface const&);
    FakeThermalMonitorInterface(FakeThermalMonitorInterface const&);

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
    // member functions
    // NOLINTBEGIN
    MCAPI FakeThermalMonitorInterface();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ThermalState $getThermalState() const;

    MCAPI float $getThermalValueCelsius() const;

    MCAPI bool $isLowBatteryModeEnabled() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
