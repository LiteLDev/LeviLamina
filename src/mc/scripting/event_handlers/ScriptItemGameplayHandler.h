#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/common/wrapper/HandlerResult.h"
#include "mc/events/ItemGameplayEvent.h"
#include "mc/events/MutableItemGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptItemGameplayHandler {
public:
    // prevent constructor by default
    ScriptItemGameplayHandler& operator=(ScriptItemGameplayHandler const&) = delete;
    ScriptItemGameplayHandler(ScriptItemGameplayHandler const&)            = delete;
    ScriptItemGameplayHandler()                                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$ItemGameplayEvent@X@@U?$MutableItemGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VItemGameplayHandler@@@Details@@MEAA?AW4HandlerResult@@AEBU?$ItemGameplayEvent@X@@@Z
    virtual ::HandlerResult handleEvent(struct ItemGameplayEvent<void> const&);

    // vIndex: 2, symbol:
    // ?handleEvent@?$Impl@U?$type_list@U?$MutableItemGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VItemGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAU?$MutableItemGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableItemGameplayEvent<::CoordinatorResult>&);

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

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

    // vIndex: 10, symbol:
    // ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemDefinitionEventTriggeredEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ItemDefinitionEventTriggeredEvent&);

    // vIndex: 11, symbol:
    // ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemUseOnEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ItemUseOnEvent&);

    // vIndex: 12, symbol:
    // ?handleEvent@ScriptItemGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUItemUseEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ItemUseEvent&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleItemDefinitionEventTriggered@ScriptItemGameplayHandler@@AEAA_NAEAUItemDefinitionEventTriggeredEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleItemDefinitionEventTriggered(struct ItemDefinitionEventTriggeredEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptBeforeEvents>);

    // symbol:
    // ?_handleItemUseEvent@ScriptItemGameplayHandler@@AEAA_NAEAUItemUseEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleItemUseEvent(struct ItemUseEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptBeforeEvents>);

    // symbol:
    // ?_handleItemUseOnEvent@ScriptItemGameplayHandler@@AEAA_NAEAUItemUseOnEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleItemUseOnEvent(struct ItemUseOnEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptBeforeEvents>);

    // NOLINTEND
};
