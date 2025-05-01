#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameServerShutdown {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameServerShutdown() = default;

    // vIndex: 1
    virtual void requestLeaveGame(bool, bool) = 0;

    // vIndex: 2
    virtual void requestLeaveThenJoinFriendsWorld(::std::string_view) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
