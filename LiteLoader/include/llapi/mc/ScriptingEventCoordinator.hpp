/**
 * @file  MC/ScriptingEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ScriptingEventCoordinator.
 *
 */
class ScriptingEventCoordinator {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINGEVENTCOORDINATOR
public:
    class ScriptingEventCoordinator& operator=(class ScriptingEventCoordinator const &) = delete;
    ScriptingEventCoordinator(class ScriptingEventCoordinator const &) = delete;
    ScriptingEventCoordinator() = delete;
#endif

public:
    /**
     * @hash   1134910426
     * @symbol ?getScriptingEventHandler@ScriptingEventCoordinator@@QEAAAEAVScriptingEventHandler@@XZ
     */
    MCAPI class ScriptingEventHandler & getScriptingEventHandler();
    /**
     * @hash   1396274400
     * @symbol ?registerScriptingEventHandler@ScriptingEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VScriptingEventHandler@@U?$default_delete@VScriptingEventHandler@@@std@@@std@@@Z
     */
    MCAPI void registerScriptingEventHandler(std::unique_ptr<class ScriptingEventHandler> &&);
    /**
     * @hash   546740313
     * @symbol ?sendEvent@ScriptingEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableScriptingGameplayEvent@W4CoordinatorResult@@@@@@@Z
     */
    MCAPI enum CoordinatorResult sendEvent(class EventRef<struct MutableScriptingGameplayEvent<enum CoordinatorResult>>);

};