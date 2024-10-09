#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/thermal/ThermalState.h"

class ThermalMonitorInterface {
public:
    // prevent constructor by default
    ThermalMonitorInterface& operator=(ThermalMonitorInterface const&);
    ThermalMonitorInterface(ThermalMonitorInterface const&);
    ThermalMonitorInterface();

public:
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
};
