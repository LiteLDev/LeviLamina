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
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FakeBatteryMonitorInterface() = default;

    // vIndex: 1
    virtual ::BatteryStatus getBatteryStatus() const;

    // vIndex: 2
    virtual float getBatteryLevel() const;

    MCAPI FakeBatteryMonitorInterface();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI float getBatteryLevel$() const;

    MCAPI ::BatteryStatus getBatteryStatus$() const;

    // NOLINTEND
};
