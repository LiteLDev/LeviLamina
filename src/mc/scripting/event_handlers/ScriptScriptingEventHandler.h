#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/gameplayhandlers/GameplayHandlerResult.h"
#include "mc/world/events/MutableScriptingGameplayEvent.h"
#include "mc/world/events/ScriptingGameplayEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptSystemBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptScriptingEventHandler {
public:
    // prevent constructor by default
    ScriptScriptingEventHandler& operator=(ScriptScriptingEventHandler const&);
    ScriptScriptingEventHandler(ScriptScriptingEventHandler const&);
    ScriptScriptingEventHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptScriptingEventHandler() = default;

    // vIndex: 1
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableScriptingGameplayEvent<::CoordinatorResult>& event);

    // vIndex: 2
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct ScriptingGameplayEvent<::CoordinatorResult> const& event);

    // vIndex: 3
    virtual void __unk_vfn_3();

    // vIndex: 4
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _handleWatchdogTerminateEvent(
        struct BeforeWatchdogTerminateEvent&      beforeWatchdogTerminateEvent,
        class Scripting::WeakLifetimeScope const& scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents>
            scriptSystemBeforeEventsHandle
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct MutableScriptingGameplayEvent<::CoordinatorResult>& event);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct ScriptingGameplayEvent<::CoordinatorResult> const& event);

    MCAPI struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent$(struct BeforeWatchdogTerminateEvent& beforeWatchdogTerminateEvent);

    // NOLINTEND
};
