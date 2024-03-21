#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/common/wrapper/HandlerResult.h"
#include "mc/events/MutablePlayerGameplayEvent.h"
#include "mc/events/PlayerGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptPlayerGameplayHandler {
public:
    // prevent constructor by default
    ScriptPlayerGameplayHandler& operator=(ScriptPlayerGameplayHandler const&);
    ScriptPlayerGameplayHandler(ScriptPlayerGameplayHandler const&);
    ScriptPlayerGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptPlayerGameplayHandler@@UEAA@XZ
    virtual ~ScriptPlayerGameplayHandler() = default;

    // vIndex: 1, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$PlayerGameplayEvent@X@@$$CBU?$PlayerGameplayEvent@W4CoordinatorResult@@@@U?$MutablePlayerGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VPlayerGameplayHandler@@@Details@@MEAA?AW4HandlerResult@@AEBU?$PlayerGameplayEvent@X@@@Z
    virtual ::HandlerResult handleEvent(struct PlayerGameplayEvent<void> const&);

    // vIndex: 2, symbol:
    // ?handleEvent@ScriptPlayerGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBU?$PlayerGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct PlayerGameplayEvent<::CoordinatorResult> const&);

    // vIndex: 3, symbol:
    // ?handleEvent@ScriptPlayerGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAU?$MutablePlayerGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutablePlayerGameplayEvent<::CoordinatorResult>&);

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

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

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: __unk_vfn_16
    virtual void __unk_vfn_16();

    // vIndex: 17, symbol: __unk_vfn_17
    virtual void __unk_vfn_17();

    // vIndex: 18, symbol: __unk_vfn_18
    virtual void __unk_vfn_18();

    // vIndex: 19, symbol: __unk_vfn_19
    virtual void __unk_vfn_19();

    // vIndex: 20, symbol: __unk_vfn_20
    virtual void __unk_vfn_20();

    // vIndex: 21, symbol: __unk_vfn_21
    virtual void __unk_vfn_21();

    // vIndex: 22, symbol: __unk_vfn_22
    virtual void __unk_vfn_22();

    // vIndex: 23, symbol:
    // ?handleEvent@ScriptPlayerGameplayHandler@@UEAA?AW4HandlerResult@@AEBUPlayerDisconnectEvent@@@Z
    virtual ::HandlerResult handleEvent(struct PlayerDisconnectEvent const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleCoordinatorPlayerGameplayEvent@ScriptPlayerGameplayHandler@@AEAA_NAEBU?$PlayerGameplayEvent@W4CoordinatorResult@@@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleCoordinatorPlayerGameplayEvent(struct PlayerGameplayEvent<::CoordinatorResult> const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>);

    // symbol:
    // ?_handleMutablePlayerGameplayEvent@ScriptPlayerGameplayHandler@@AEBA_NAEAU?$MutablePlayerGameplayEvent@W4CoordinatorResult@@@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleMutablePlayerGameplayEvent(struct MutablePlayerGameplayEvent<::CoordinatorResult>&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // symbol:
    // ?_handlePlayerDisconnectEvent@ScriptPlayerGameplayHandler@@AEBA_NAEBUPlayerDisconnectEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handlePlayerDisconnectEvent(struct PlayerDisconnectEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // NOLINTEND
};
