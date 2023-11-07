#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/BatteryStatus.h"
#include "mc/platform/battery/BatteryMonitorInterface.h"

class FakeBatteryMonitorInterface : public ::BatteryMonitorInterface {
public:
    // prevent constructor by default
    FakeBatteryMonitorInterface& operator=(FakeBatteryMonitorInterface const&);
    FakeBatteryMonitorInterface(FakeBatteryMonitorInterface const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FakeBatteryMonitorInterface@@UEAA@XZ
    virtual ~FakeBatteryMonitorInterface() = default;

    // vIndex: 1, symbol: ?getBatteryStatus@FakeBatteryMonitorInterface@@UEBA?AW4BatteryStatus@@XZ
    virtual ::BatteryStatus getBatteryStatus() const;

    // vIndex: 2, symbol: ?getBatteryLevel@FakeBatteryMonitorInterface@@UEBAMXZ
    virtual float getBatteryLevel() const;

    // symbol: ??0FakeBatteryMonitorInterface@@QEAA@XZ
    MCAPI FakeBatteryMonitorInterface();

    // NOLINTEND
};
