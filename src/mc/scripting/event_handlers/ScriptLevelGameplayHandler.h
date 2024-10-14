#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/gameplayhandlers/HandlerResult.h"
#include "mc/world/events/LevelGameplayEvent.h"
#include "mc/world/events/MutableLevelGameplayEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptLevelGameplayHandler {
public:
    // prevent constructor by default
    ScriptLevelGameplayHandler& operator=(ScriptLevelGameplayHandler const&);
    ScriptLevelGameplayHandler(ScriptLevelGameplayHandler const&);
    ScriptLevelGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptLevelGameplayHandler() = default;

    // vIndex: 1
    virtual ::HandlerResult handleEvent(struct ScriptingInitializeEvent const& event);

    // vIndex: 2
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct LevelWeatherChangedEvent& event);

    // vIndex: 3
    virtual ::HandlerResult handleEvent(struct LevelGameplayEvent<void> const& event);

    // vIndex: 4
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableLevelGameplayEvent<::CoordinatorResult>& event);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _handleScriptingInitializeEvent(
        struct ScriptingInitializeEvent const&    eventData,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    MCAPI bool _handleWeatherChangedEvent(
        struct LevelWeatherChangedEvent&          weatherChangedEvent,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>
            scriptLevelEventsHandle
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::HandlerResult handleEvent$(struct ScriptingInitializeEvent const& event);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult> handleEvent$(struct LevelWeatherChangedEvent& event);

    MCAPI ::HandlerResult handleEvent$(struct LevelGameplayEvent<void> const& event);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct MutableLevelGameplayEvent<::CoordinatorResult>& event);

    // NOLINTEND
};
