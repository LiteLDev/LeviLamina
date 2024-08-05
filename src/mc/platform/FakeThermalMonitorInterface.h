#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ThermalState.h"
#include "mc/platform/thermal/ThermalMonitorInterface.h"

class FakeThermalMonitorInterface : public ::ThermalMonitorInterface {
public:
    // prevent constructor by default
    FakeThermalMonitorInterface& operator=(FakeThermalMonitorInterface const&);
    FakeThermalMonitorInterface(FakeThermalMonitorInterface const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FakeThermalMonitorInterface() = default;

    // vIndex: 1
    virtual ::ThermalState getThermalState() const;

    // vIndex: 2
    virtual float getThermalValueCelsius() const;

    // vIndex: 3
    virtual bool isLowBatteryModeEnabled() const;

    MCAPI FakeThermalMonitorInterface();

    // NOLINTEND
};
