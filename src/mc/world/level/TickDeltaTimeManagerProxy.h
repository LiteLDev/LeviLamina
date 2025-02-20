#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ITickDeltaTimeManagerProxy.h"

class TickDeltaTimeManagerProxy : public ::ITickDeltaTimeManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 56> mUnk793aac;
    // NOLINTEND

public:
    // prevent constructor by default
    TickDeltaTimeManagerProxy& operator=(TickDeltaTimeManagerProxy const&);
    TickDeltaTimeManagerProxy(TickDeltaTimeManagerProxy const&);
    TickDeltaTimeManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickDeltaTimeManagerProxy() /*override*/ = default;

    // vIndex: 1
    virtual void start() /*override*/;

    // vIndex: 2
    virtual double calculateDeltaTimeAndReset() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
    MCAPI static void** $vftable();
    // NOLINTEND
};
