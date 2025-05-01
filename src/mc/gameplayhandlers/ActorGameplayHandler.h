#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/ActorGameplayEvent.h"
#include "mc/world/events/MutableActorGameplayEvent.h"

class ActorGameplayHandler : public ::GameplayHandler {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ActorGameplayHandler() /*override*/ = default;

    // vIndex: 4
    virtual ::HandlerResult handleEvent(::ActorGameplayEvent<void> const&) = 0;

    // vIndex: 3
    virtual ::HandlerResult handleEvent(::MutableActorGameplayEvent<void>&) = 0;

    // vIndex: 2
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorGameplayEvent<::CoordinatorResult> const&) = 0;

    // vIndex: 1
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableActorGameplayEvent<::CoordinatorResult>&) = 0;
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
