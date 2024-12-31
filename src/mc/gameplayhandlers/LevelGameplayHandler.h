#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"

class LevelGameplayHandler : public ::GameplayHandler {
public:
    // prevent constructor by default
    LevelGameplayHandler& operator=(LevelGameplayHandler const&);
    LevelGameplayHandler(LevelGameplayHandler const&);
    LevelGameplayHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelGameplayHandler() /*override*/ = default;

    // vIndex: 2
    virtual ::HandlerResult handleEvent(::LevelGameplayEvent<void> const&) = 0;

    // vIndex: 1
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableLevelGameplayEvent<::CoordinatorResult>&) = 0;
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
