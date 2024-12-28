#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/battery/BatteryMonitorInterface.h"
#include "mc/platform/battery/BatteryStatus.h"

class FakeBatteryMonitorInterface : public ::BatteryMonitorInterface {
public:
    // prevent constructor by default
    FakeBatteryMonitorInterface& operator=(FakeBatteryMonitorInterface const&);
    FakeBatteryMonitorInterface(FakeBatteryMonitorInterface const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FakeBatteryMonitorInterface() /*override*/;

    // vIndex: 1
    virtual ::BatteryStatus getBatteryStatus() const /*override*/;

    // vIndex: 2
    virtual float getBatteryLevel() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FakeBatteryMonitorInterface();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BatteryStatus $getBatteryStatus() const;

    MCAPI float $getBatteryLevel() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
