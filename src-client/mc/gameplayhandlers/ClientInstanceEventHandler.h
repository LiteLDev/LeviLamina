#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ClientInstanceGameplayEvent.h"

class ClientInstanceEventHandler : public ::GameplayHandler {
public:
    // ClientInstanceEventHandler inner types define
    using EventTypes = ::entt::type_list<::ClientInstanceGameplayEvent<void> const>;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::HandlerResult handleEvent(::ClientInstanceGameplayEvent<void> const&) = 0;

    // vIndex: 0
    virtual ~ClientInstanceEventHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
