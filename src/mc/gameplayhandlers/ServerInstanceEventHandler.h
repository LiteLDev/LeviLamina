#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ServerInstanceGameplayEvent.h"

class ServerInstanceEventHandler : public ::GameplayHandler {
public:
    // ServerInstanceEventHandler inner types define
    using EventTypes = ::entt::type_list<::ServerInstanceGameplayEvent<void> const>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerInstanceEventHandler() /*override*/ = default;

    virtual ::HandlerResult handleEvent(::ServerInstanceGameplayEvent<void> const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
