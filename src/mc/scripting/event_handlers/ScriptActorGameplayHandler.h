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
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptActorGameplayHandler {
public:
    // prevent constructor by default
    ScriptActorGameplayHandler& operator=(ScriptActorGameplayHandler const&);
    ScriptActorGameplayHandler(ScriptActorGameplayHandler const&);
    ScriptActorGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptActorGameplayHandler@@UEAA@XZ
    virtual ~ScriptActorGameplayHandler() = default;

    // vIndex: 1, symbol:
    // ?handleEvent@ScriptActorGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUActorAddEffectEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ActorAddEffectEvent&);

    // vIndex: 2, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$ActorGameplayEvent@X@@$$CBU?$ActorGameplayEvent@W4CoordinatorResult@@@@U?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VActorGameplayHandler@@@Details@@MEAA?AW4HandlerResult@@AEBU?$ActorGameplayEvent@X@@@Z
    virtual ::HandlerResult handleEvent(struct ActorGameplayEvent<void> const& event);

    // vIndex: 3, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$ActorGameplayEvent@W4CoordinatorResult@@@@U?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VActorGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBU?$ActorGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct ActorGameplayEvent<::CoordinatorResult> const& event);

    // vIndex: 4, symbol:
    // ?handleEvent@?$Impl@U?$type_list@U?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VActorGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAU?$MutableActorGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableActorGameplayEvent<::CoordinatorResult>& event);

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: ?handleEvent@ScriptActorGameplayHandler@@UEAA?AW4HandlerResult@@AEBUActorRemovedEvent@@@Z
    virtual ::HandlerResult handleEvent(struct ActorRemovedEvent const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleActorEffectAddedEvent@ScriptActorGameplayHandler@@AEBA_NAEAUActorAddEffectEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleActorEffectAddedEvent(struct ActorAddEffectEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // symbol:
    // ?_handleActorRemoveEvent@ScriptActorGameplayHandler@@AEBA_NAEBUActorRemovedEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleActorRemoveEvent(struct ActorRemovedEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // NOLINTEND
};
