/**
 * @file  ScriptScriptingEventHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Scripting.hpp"
#include "ScriptModuleMinecraft.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptScriptingEventHandler.
 *
 */
class ScriptScriptingEventHandler {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSCRIPTINGEVENTHANDLER
public:
    class ScriptScriptingEventHandler& operator=(class ScriptScriptingEventHandler const &) = delete;
    ScriptScriptingEventHandler(class ScriptScriptingEventHandler const &) = delete;
    ScriptScriptingEventHandler() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~ScriptScriptingEventHandler();
    /**
     * @vftbl  1
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@U?$MutableScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@$$CBU?$ScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VScriptingEventHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAU?$MutableScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct MutableScriptingGameplayEvent<enum class CoordinatorResult> &);
    /**
     * @vftbl  2
     * @symbol  ?handleEvent\@?$Impl\@U?$type_list\@$$CBU?$ScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@entt\@\@\@?$EventHandlerDispatcher\@VScriptingEventHandler\@\@\@Details\@\@MEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEBU?$ScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct ScriptingGameplayEvent<enum class CoordinatorResult> const &);
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  ?handleEvent\@ScriptScriptingEventHandler\@\@UEAA?AU?$GameplayHandlerResult\@W4CoordinatorResult\@\@\@\@AEAUBeforeWatchdogTerminateEvent\@\@\@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct BeforeWatchdogTerminateEvent &);

//private:
    /**
     * @symbol  ?_handleWatchdogTerminateEvent\@ScriptScriptingEventHandler\@\@AEBA_NAEAUBeforeWatchdogTerminateEvent\@\@AEBVWeakLifetimeScope\@Scripting\@\@U?$TypedObjectHandle\@VScriptSystemEvents\@ScriptModuleMinecraft\@\@\@4\@\@Z
     */
    MCAPI bool _handleWatchdogTerminateEvent(struct BeforeWatchdogTerminateEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemEvents>) const;

private:

};