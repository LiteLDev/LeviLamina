#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BatteryStatus.h"
#include "mc/platform/battery/BatteryMonitorInterface.h"

class AndroidBatteryMonitorInterface : public ::BatteryMonitorInterface {
public:
    // prevent constructor by default
    AndroidBatteryMonitorInterface& operator=(AndroidBatteryMonitorInterface const&);
    AndroidBatteryMonitorInterface(AndroidBatteryMonitorInterface const&);
    AndroidBatteryMonitorInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1AndroidBatteryMonitorInterface@@UEAA@XZ
    virtual ~AndroidBatteryMonitorInterface() = default;

    // NOLINTEND
};
