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
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptBlockGameplayHandler();
    /**
     * @vftbl  1
     * @symbol  ?handleEvent\@?$AddHandleEvent\@U?$Impl\@U?$type_list\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@U?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$type_list\@$$CBUCraftUISetResultNameEvent\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@UEAA?AU?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@AEBUCraftUISetResultNameEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<class std::optional<std::string>> handleEvent(struct CraftUISetResultNameEvent const &);
    /**
     * @vftbl  2
     * @symbol  ?handleEvent\@ScriptBlockGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUExplosionStartedEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ExplosionStartedEvent &);
    /**
     * @vftbl  3
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@X\@\@$$CBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AW4HandlerResult\@\@AEBU?$BlockGameplayEvent\@X\@\@\@Z
     */
    virtual enum class HandlerResult handleEvent(struct BlockGameplayEvent<void> const &);
    /**
     * @vftbl  4
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBU?$BlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct BlockGameplayEvent<enum class CoordinatorResult> const &);
    /**
     * @vftbl  5
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@AEBU?$BlockGameplayEvent\@V?$optional\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<class std::optional<std::string>> handleEvent(struct BlockGameplayEvent<class std::optional<std::string>> const &);
    /**
     * @vftbl  6
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@U?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VBlockGameplayHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAU?$MutableBlockGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct MutableBlockGameplayEvent<enum class CoordinatorResult> &);
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol  ?handleEvent\@ScriptBlockGameplayHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBUPistonActionEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct PistonActionEvent const &);

//private:
    /**
     * @symbol  ?_handleExplosionStartedEvent\@ScriptBlockGameplayHandler\@\@AEBA_NAEAUExplosionStartedEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VScriptWorldEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handleExplosionStartedEvent(struct ExplosionStartedEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;
    /**
     * @symbol  ?_handlePistonActionEvent\@ScriptBlockGameplayHandler\@\@AEBA_NAEBUPistonActionEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VScriptWorldEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handlePistonActionEvent(struct PistonActionEvent const &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptWorldEvents>) const;

private:

};