#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/events/MutableScriptingGameplayEvent.h"
#include "mc/external/scripting/ScriptingGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

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
    // vIndex: 0, symbol: __gen_??1ScriptScriptingEventHandler@@UEAA@XZ
    virtual ~ScriptScriptingEventHandler() = default;

    // vIndex: 1, symbol:
    // ?handleEvent@?$Impl@U?$type_list@U?$MutableScriptingGameplayEvent@W4CoordinatorResult@@@@$$CBU?$ScriptingGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VScriptingEventHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAU?$MutableScriptingGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableScriptingGameplayEvent<::CoordinatorResult>& event);

    // vIndex: 2, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$ScriptingGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VScriptingEventHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBU?$ScriptingGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct ScriptingGameplayEvent<::CoordinatorResult> const& event);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol:
    // ?handleEvent@ScriptScriptingEventHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUBeforeWatchdogTerminateEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct BeforeWatchdogTerminateEvent&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleWatchdogTerminateEvent@ScriptScriptingEventHandler@@AEBA_NAEAUBeforeWatchdogTerminateEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptSystemBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleWatchdogTerminateEvent(struct BeforeWatchdogTerminateEvent&, class Scripting::WeakLifetimeScope const& scope, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemBeforeEvents>)
        const;

    // NOLINTEND
};
