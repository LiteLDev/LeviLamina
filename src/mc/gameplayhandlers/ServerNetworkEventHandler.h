#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/world/events/MutableServerNetworkGameplayEvent.h"

class ServerNetworkEventHandler : public ::GameplayHandler {
public:
    // ServerNetworkEventHandler inner types define
    using EventTypes = ::entt::type_list<::MutableServerNetworkGameplayEvent<::CoordinatorResult>>;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableServerNetworkGameplayEvent<::CoordinatorResult>&) = 0;

    // vIndex: 0
    virtual ~ServerNetworkEventHandler() /*override*/ = default;
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
