#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandler.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingGameplayEvent.h"

class ScriptingEventHandler : public ::GameplayHandler {
public:
    // prevent constructor by default
    ScriptingEventHandler& operator=(ScriptingEventHandler const&);
    ScriptingEventHandler(ScriptingEventHandler const&);
    ScriptingEventHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::MutableScriptingGameplayEvent<::CoordinatorResult>&) = 0;

    // vIndex: 1
    virtual ::GameplayHandlerResult<::CoordinatorResult>
    handleEvent(::ScriptingGameplayEvent<::CoordinatorResult> const&) = 0;

    // vIndex: 0
    virtual ~ScriptingEventHandler() /*override*/;
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
