#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/GameplayHandlerResult.h"
#include "mc/events/MutableBlockGameplayEvent.h"
#include "mc/external/scripting/TypedObjectHandle.h"
#include "mc/world/level/block/utils/BlockGameplayEvent.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptBeforeEvents; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

class ScriptBlockGameplayHandler {

public:
    // prevent constructor by default
    ScriptBlockGameplayHandler& operator=(ScriptBlockGameplayHandler const&) = delete;
    ScriptBlockGameplayHandler(ScriptBlockGameplayHandler const&)            = delete;
    ScriptBlockGameplayHandler()                                             = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol
     * ?handleEvent\@?$AddHandleEvent\@U?$Impl\@U?$type_list\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@U?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$type_list\@$$CBUCraftUISetResultNameEvent\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@UEAA?AU?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@AEBUCraftUISetResultNameEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<class std::optional<std::string>>
    handleEvent(struct CraftUISetResultNameEvent const&); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?handleEvent\@ScriptBlockGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUExplosionStartedEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult>
    handleEvent(struct ExplosionStartedEvent&); // NOLINT
    /**
     * @vftbl 3
     * @symbol
     * ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@X\@\@$$CBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AW4HandlerResult\@\@AEBU?$BlockGameplayEvent\@X\@\@\@Z
     */
    virtual enum class HandlerResult handleEvent(struct BlockGameplayEvent<void> const&); // NOLINT
    /**
     * @vftbl 4
     * @symbol
     * ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult>
    handleEvent(struct BlockGameplayEvent<enum class CoordinatorResult> const&); // NOLINT
    /**
     * @vftbl 5
     * @symbol
     * ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@AEBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<class std::optional<std::string>>
    handleEvent(struct BlockGameplayEvent<class std::optional<std::string>> const&); // NOLINT
    /**
     * @vftbl 6
     * @symbol
     * ?handleEvent\@?$Impl\@U?$type_list\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAU?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult>
    handleEvent(struct MutableBlockGameplayEvent<enum class CoordinatorResult>&); // NOLINT
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7(); // NOLINT
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8(); // NOLINT
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9(); // NOLINT
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10(); // NOLINT
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11(); // NOLINT
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12(); // NOLINT
    /**
     * @vftbl 13
     * @symbol
     * ?handleEvent\@ScriptBlockGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBUPistonActionEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult>
    handleEvent(struct PistonActionEvent const&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_handleExplosionStartedEvent\@ScriptBlockGameplayHandler\@\@AEBA_NAEAUExplosionStartedEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptBeforeEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool
    _handleExplosionStartedEvent(struct ExplosionStartedEvent&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptBeforeEvents>)
        const; // NOLINT
    /**
     * @symbol
     * ?_handlePistonActionEvent\@ScriptBlockGameplayHandler\@\@AEBA_NAEBUPistonActionEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptBeforeEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool
    _handlePistonActionEvent(struct PistonActionEvent const&, class Scripting::WeakLifetimeScope const&, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptBeforeEvents>)
        const; // NOLINT

private:
};
