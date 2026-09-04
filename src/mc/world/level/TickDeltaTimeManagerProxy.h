#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/world/level/ITickDeltaTimeManagerProxy.h"

class TickDeltaTimeManagerProxy : public ::ITickDeltaTimeManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 56, ::Stopwatch> mTickTimer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~TickDeltaTimeManagerProxy() /*override*/ = default;

    virtual void start() /*override*/;

    virtual double calculateDeltaTimeAndReset() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $start();

    MCAPI double $calculateDeltaTimeAndReset();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
