#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameServerShutdown {
public:
    // prevent constructor by default
    IGameServerShutdown& operator=(IGameServerShutdown const&);
    IGameServerShutdown(IGameServerShutdown const&);
    IGameServerShutdown();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameServerShutdown();

    // vIndex: 1
    virtual void requestLeaveGame(bool, bool) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
