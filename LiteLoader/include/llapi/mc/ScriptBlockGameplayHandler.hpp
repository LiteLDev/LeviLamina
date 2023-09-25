/**
 * @file  ScriptBlockGameplayHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptBlockGameplayHandler.
 *
 */
class ScriptBlockGameplayHandler {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBLOCKGAMEPLAYHANDLER
public:
    class ScriptBlockGameplayHandler& operator=(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler(class ScriptBlockGameplayHandler const &) = delete;
    ScriptBlockGameplayHandler() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?handleEvent\@?$AddHandleEvent\@U?$Impl\@U?$type_list\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@U?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$type_list\@$$CBUCraftUISetResultNameEvent\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@UEAA?AU?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@AEBUCraftUISetResultNameEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<class std::optional<std::string>> handleEvent(struct CraftUISetResultNameEvent const &);
    /**
     * @vftbl 2
     * @symbol ?handleEvent\@ScriptBlockGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUExplosionStartedEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ExplosionStartedEvent &);
    /**
     * @vftbl 3
     * @symbol ?handleEvent\@ScriptBlockGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUBlockTryDestroyByPlayerEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct BlockTryDestroyByPlayerEvent &);
    /**
     * @vftbl 4
     * @symbol ?handleEvent\@ScriptBlockGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUBlockTryPlaceByPlayerEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct BlockTryPlaceByPlayerEvent &);
    /**
     * @vftbl 5
     * @symbol ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@X\@\@$$CBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AW4HandlerResult\@\@AEBU?$BlockGameplayEvent\@X\@\@\@Z
     */
    virtual enum class HandlerResult handleEvent(struct BlockGameplayEvent<void> const &);
    /**
     * @vftbl 6
     * @symbol ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct BlockGameplayEvent<enum class CoordinatorResult> const &);
    /**
     * @vftbl 7
     * @symbol ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@AEBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<class std::optional<std::string>> handleEvent(struct BlockGameplayEvent<class std::optional<std::string>> const &);
    /**
     * @vftbl 8
     * @symbol ?handleEvent\@?$Impl\@U?$type_list\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAU?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct MutableBlockGameplayEvent<enum class CoordinatorResult> &);
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol ?handleEvent\@ScriptBlockGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBUPistonActionEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct PistonActionEvent const &);

//private:
    /**
     * @symbol ?_handleBlockTryDestroyByPlayerEvent\@ScriptBlockGameplayHandler\@\@AEBA_NAEAUBlockTryDestroyByPlayerEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handleBlockTryDestroyByPlayerEvent(struct BlockTryDestroyByPlayerEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>) const;
    /**
     * @symbol ?_handleBlockTryPlaceByPlayerEvent\@ScriptBlockGameplayHandler\@\@AEBA_NAEAUBlockTryPlaceByPlayerEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handleBlockTryPlaceByPlayerEvent(struct BlockTryPlaceByPlayerEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>) const;
    /**
     * @symbol ?_handleExplosionStartedEvent\@ScriptBlockGameplayHandler\@\@AEBA_NAEAUExplosionStartedEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handleExplosionStartedEvent(struct ExplosionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>) const;
    /**
     * @symbol ?_handlePistonActionEvent\@ScriptBlockGameplayHandler\@\@AEBA_NAEBUPistonActionEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VIScriptWorldBeforeEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handlePistonActionEvent(struct PistonActionEvent const &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldBeforeEvents>) const;

private:

};
