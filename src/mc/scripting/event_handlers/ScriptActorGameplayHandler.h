#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/common/wrapper/HandlerResult.h"
#include "mc/events/ActorGameplayEvent.h"
#include "mc/events/MutableActorGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptActorGameplayHandler {
public:
    // prevent constructor by default
    ScriptActorGameplayHandler& operator=(ScriptActorGameplayHandler const&) = delete;
    ScriptActorGameplayHandler(ScriptActorGameplayHandler const&)            = delete;
    ScriptActorGameplayHandler()                                             = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?handleEvent@ScriptActorGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUActorDefinitionStartedEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ActorDefinitionStartedEvent&);

    // vIndex: 2, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$ActorGameplayEvent@X@@$$CBU?$ActorGameplayEvent@W4CoordinatorResult@@@@U?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VActorGameplayHandler@@@Details@@MEAA?AW4HandlerResult@@AEBU?$ActorGameplayEvent@X@@@Z
    virtual ::HandlerResult handleEvent(struct ActorGameplayEvent<void> const&);

    // vIndex: 3, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$ActorGameplayEvent@W4CoordinatorResult@@@@U?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VActorGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBU?$ActorGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct ActorGameplayEvent<::CoordinatorResult> const&);

    // vIndex: 4, symbol:
    // ?handleEvent@?$Impl@U?$type_list@U?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VActorGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAU?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableActorGameplayEvent<::CoordinatorResult>&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleActorDefinitionStartedEvent@ScriptActorGameplayHandler@@AEBA_NAEAUActorDefinitionStartedEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleActorDefinitionStartedEvent(struct ActorDefinitionStartedEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptBeforeEvents>)
        const;

    // NOLINTEND
};
