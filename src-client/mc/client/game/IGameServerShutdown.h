#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/LeaveGameResourceBehavior.h"

struct IGameServerShutdown {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameServerShutdown() = default;

    virtual void abortPendingGameJoin() = 0;

    virtual void requestLeaveGame(bool switchScreen, bool sync, ::LeaveGameResourceBehavior resourceBehavior) = 0;

    virtual void requestLeaveThenJoinFriendsWorld(::std::string_view serverId) = 0;

    virtual void requestLeaveGameWithWorldThumbnail() = 0;

    virtual void requestLeaveGameWithWorldThumbnailThenJoinFriendsWorld(::std::string_view serverId) = 0;
    // NOLINTEND
};
