#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameServerShutdown {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameServerShutdown() = default;

    virtual void requestLeaveGame(bool, bool) = 0;

    virtual void requestLeaveThenJoinFriendsWorld(::std::string_view) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
