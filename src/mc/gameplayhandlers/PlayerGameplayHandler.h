#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/MutablePlayerGameplayEvent.h"
#include "mc/world/events/PlayerGameplayEvent.h"

class PlayerGameplayHandler : public ::GameplayHandler {
public:
    // prevent constructor by default
    PlayerGameplayHandler& operator=(PlayerGameplayHandler const&);
    PlayerGameplayHandler(PlayerGameplayHandler const&);
    PlayerGameplayHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::HandlerResult handleEvent(::PlayerGameplayEvent<void> const&) = 0;

    // vIndex: 2
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::PlayerGameplayEvent<::CoordinatorResult> const&) = 0;

    // vIndex: 1
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutablePlayerGameplayEvent<::CoordinatorResult>&) = 0;

    // vIndex: 0
    virtual ~PlayerGameplayHandler() /*override*/;
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
