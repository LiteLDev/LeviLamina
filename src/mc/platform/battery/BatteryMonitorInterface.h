#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BatteryStatus.h"

class BatteryMonitorInterface {
public:
    // prevent constructor by default
    BatteryMonitorInterface& operator=(BatteryMonitorInterface const&);
    BatteryMonitorInterface(BatteryMonitorInterface const&);
    BatteryMonitorInterface();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BatteryMonitorInterface();

    // vIndex: 1, symbol: ?getBatteryStatus@FakeBatteryMonitorInterface@@UEBA?AW4BatteryStatus@@XZ
    virtual ::BatteryStatus getBatteryStatus() const = 0;

    // vIndex: 2, symbol: ?getBatteryLevel@FakeBatteryMonitorInterface@@UEBAMXZ
    virtual float getBatteryLevel() const = 0;

    // NOLINTEND
};
