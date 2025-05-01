#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/battery/BatteryMonitorInterface.h"
#include "mc/platform/battery/BatteryStatus.h"

class FakeBatteryMonitorInterface : public ::BatteryMonitorInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FakeBatteryMonitorInterface() /*override*/ = default;

    // vIndex: 1
    virtual ::BatteryStatus getBatteryStatus() const /*override*/;

    // vIndex: 2
    virtual float getBatteryLevel() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BatteryStatus $getBatteryStatus() const;

    MCNAPI float $getBatteryLevel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
