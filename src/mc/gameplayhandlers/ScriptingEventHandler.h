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
    // ScriptingEventHandler inner types define
    using EventTypes = ::entt::type_list<
        ::MutableScriptingGameplayEvent<::CoordinatorResult>,
        ::ScriptingGameplayEvent<::CoordinatorResult> const>;

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
    virtual ~ScriptingEventHandler() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
