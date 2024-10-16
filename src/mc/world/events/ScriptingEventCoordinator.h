#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingGameplayEvent.h"

class ScriptingEventCoordinator {
public:
    // prevent constructor by default
    ScriptingEventCoordinator& operator=(ScriptingEventCoordinator const&);
    ScriptingEventCoordinator(ScriptingEventCoordinator const&);
    ScriptingEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptingEventCoordinator() = default;

    MCAPI class ScriptingEventHandler& getScriptingEventHandler();

    MCAPI void registerScriptingEventHandler(std::unique_ptr<class ScriptingEventHandler>&& handler);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableScriptingGameplayEvent<::CoordinatorResult>> event
    );

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct ScriptingGameplayEvent<::CoordinatorResult>> event);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
