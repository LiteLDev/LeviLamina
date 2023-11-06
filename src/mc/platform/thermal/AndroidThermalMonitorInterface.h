#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/ThermalState.h"
#include "mc/platform/thermal/ThermalMonitorInterface.h"

class AndroidThermalMonitorInterface : public ::ThermalMonitorInterface {
public:
    // prevent constructor by default
    AndroidThermalMonitorInterface& operator=(AndroidThermalMonitorInterface const&);
    AndroidThermalMonitorInterface(AndroidThermalMonitorInterface const&);
    AndroidThermalMonitorInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~AndroidThermalMonitorInterface() = default;

    // NOLINTEND
};
