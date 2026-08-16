#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct IGameServerShutdown {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameServerShutdown();

    virtual void requestLeaveGame(bool switchScreen, bool sync) = 0;

    virtual void requestLeaveThenJoinFriendsWorld(::std::string_view serverId) = 0;
    // NOLINTEND
};
