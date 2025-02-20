#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ITickTimeManagerProxy.h"

// auto generated forward declare list
// clang-format off
struct Tick;
// clang-format on

class TickTimeManagerProxy : public ::ITickTimeManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbaef15;
    // NOLINTEND

public:
    // prevent constructor by default
    TickTimeManagerProxy& operator=(TickTimeManagerProxy const&);
    TickTimeManagerProxy(TickTimeManagerProxy const&);
    TickTimeManagerProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TickTimeManagerProxy() /*override*/ = default;

    // vIndex: 1
    virtual bool shouldUpdateWorldTime() const /*override*/;

    // vIndex: 2
    virtual void setWorldTickTime(int time) /*override*/;

    // vIndex: 3
    virtual int getWorldTickTime() const /*override*/;

    // vIndex: 4
    virtual void incrementCurrentTick() /*override*/;

    // vIndex: 5
    virtual ::Tick getCurrentTick() const /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $shouldUpdateWorldTime() const;

    MCAPI void $setWorldTickTime(int time);

    MCAPI int $getWorldTickTime() const;

    MCAPI void $incrementCurrentTick();

    MCAPI ::Tick $getCurrentTick() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
