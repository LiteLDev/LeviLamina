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
    virtual ~ActorGameplayHandler() /*override*/ = default;

    virtual ::HandlerResult handleEvent(::ActorGameplayEvent<void> const&) = 0;

    virtual ::HandlerResult handleEvent(::MutableActorGameplayEvent<void>&) = 0;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ActorGameplayEvent<::CoordinatorResult> const&) = 0;

    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableActorGameplayEvent<::CoordinatorResult>&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
