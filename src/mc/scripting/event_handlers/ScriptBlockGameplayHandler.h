#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/common/wrapper/HandlerResult.h"
#include "mc/events/MutableBlockGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/level/block/utils/BlockGameplayEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptWorldBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptBlockGameplayHandler {
public:
    // prevent constructor by default
    ScriptBlockGameplayHandler& operator=(ScriptBlockGameplayHandler const&);
    ScriptBlockGameplayHandler(ScriptBlockGameplayHandler const&);
    ScriptBlockGameplayHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptBlockGameplayHandler@@UEAA@XZ
    virtual ~ScriptBlockGameplayHandler() = default;

    // vIndex: 1, symbol:
    // ?handleEvent@?$AddHandleEvent@U?$Impl@U?$type_list@U?$MutableBlockGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VBlockGameplayHandler@@@Details@@U?$GameplayHandlerResult@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@@U?$type_list@$$CBUCraftUISetResultNameEvent@@@entt@@@?$EventHandlerDispatcher@VBlockGameplayHandler@@@Details@@UEAA?AU?$GameplayHandlerResult@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@@AEBUCraftUISetResultNameEvent@@@Z
    virtual struct GameplayHandlerResult<std::optional<std::string>>
    handleEvent(struct CraftUISetResultNameEvent const&);

    // vIndex: 2, symbol:
    // ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUExplosionStartedEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct ExplosionStartedEvent&);

    // vIndex: 3, symbol:
    // ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUBlockTryDestroyByPlayerEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct BlockTryDestroyByPlayerEvent&);

    // vIndex: 4, symbol:
    // ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUBlockTryPlaceByPlayerEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct BlockTryPlaceByPlayerEvent&);

    // vIndex: 5, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$BlockGameplayEvent@X@@$$CBU?$BlockGameplayEvent@W4CoordinatorResult@@@@$$CBU?$BlockGameplayEvent@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@@U?$MutableBlockGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VBlockGameplayHandler@@@Details@@MEAA?AW4HandlerResult@@AEBU?$BlockGameplayEvent@X@@@Z
    virtual ::HandlerResult handleEvent(struct BlockGameplayEvent<void> const&);

    // vIndex: 6, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$BlockGameplayEvent@W4CoordinatorResult@@@@$$CBU?$BlockGameplayEvent@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@@U?$MutableBlockGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VBlockGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBU?$BlockGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct BlockGameplayEvent<::CoordinatorResult> const&);

    // vIndex: 7, symbol:
    // ?handleEvent@?$Impl@U?$type_list@$$CBU?$BlockGameplayEvent@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@@U?$MutableBlockGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VBlockGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@@AEBU?$BlockGameplayEvent@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@@@Z
    virtual struct GameplayHandlerResult<std::optional<std::string>>
    handleEvent(struct BlockGameplayEvent<std::optional<std::string>> const&);

    // vIndex: 8, symbol:
    // ?handleEvent@?$Impl@U?$type_list@U?$MutableBlockGameplayEvent@W4CoordinatorResult@@@@@entt@@@?$EventHandlerDispatcher@VBlockGameplayHandler@@@Details@@MEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAU?$MutableBlockGameplayEvent@W4CoordinatorResult@@@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult>
    handleEvent(struct MutableBlockGameplayEvent<::CoordinatorResult>&);

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

    // vIndex: 15, symbol:
    // ?handleEvent@ScriptBlockGameplayHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEBUPistonActionEvent@@@Z
    virtual struct GameplayHandlerResult<::CoordinatorResult> handleEvent(struct PistonActionEvent const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleBlockTryDestroyByPlayerEvent@ScriptBlockGameplayHandler@@AEBA_NAEAUBlockTryDestroyByPlayerEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleBlockTryDestroyByPlayerEvent(struct BlockTryDestroyByPlayerEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // symbol:
    // ?_handleBlockTryPlaceByPlayerEvent@ScriptBlockGameplayHandler@@AEBA_NAEAUBlockTryPlaceByPlayerEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleBlockTryPlaceByPlayerEvent(struct BlockTryPlaceByPlayerEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // symbol:
    // ?_handleExplosionStartedEvent@ScriptBlockGameplayHandler@@AEBA_NAEAUExplosionStartedEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handleExplosionStartedEvent(struct ExplosionStartedEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // symbol:
    // ?_handlePistonActionEvent@ScriptBlockGameplayHandler@@AEBA_NAEBUPistonActionEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldBeforeEvents@ScriptModuleMinecraft@@@4@@Z
    MCAPI bool
    _handlePistonActionEvent(struct PistonActionEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>)
        const;

    // NOLINTEND
};
