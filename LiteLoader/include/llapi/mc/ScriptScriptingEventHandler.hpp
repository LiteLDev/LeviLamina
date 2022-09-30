/**
 * @file  ScriptScriptingEventHandler.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
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
     * @symbol __unk_destructor_0
     */
    virtual ~ScriptScriptingEventHandler();
    /**
     * @vftbl  1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @hash   1427206400
     * @vftbl  2
     * @symbol ?handleEvent@ScriptScriptingEventHandler@@UEAA?AU?$GameplayHandlerResult@W4CoordinatorResult@@@@AEAUBeforeWatchdogTerminateEvent@@@Z
     */
    virtual struct GameplayHandlerResult<enum class CoordinatorResult> handleEvent(struct BeforeWatchdogTerminateEvent &);

//private:
    /**
     * @hash   -2010185754
     * @symbol ?_handleWatchdogTerminateEvent@ScriptScriptingEventHandler@@AEBA_NAEAUBeforeWatchdogTerminateEvent@@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VScriptSystemEvents@ScriptModuleMinecraft@@@4@@Z
     */
    MCAPI bool _handleWatchdogTerminateEvent(struct BeforeWatchdogTerminateEvent &, class Scripting::WeakLifetimeScope const &, struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::ScriptSystemEvents>) const;

private:

};