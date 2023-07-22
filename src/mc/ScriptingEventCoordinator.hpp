/**
 * @file  ScriptingEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?getScriptingEventHandler\@ScriptingEventCoordinator\@\@QEAAAEAVScriptingEventHandler\@\@XZ
     */
    MCAPI class ScriptingEventHandler & getScriptingEventHandler();
    /**
     * @symbol  ?registerScriptingEventHandler\@ScriptingEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VScriptingEventHandler\@\@U?$default_delete\@VScriptingEventHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerScriptingEventHandler(std::unique_ptr<class ScriptingEventHandler> &&);
    /**
     * @symbol  ?sendEvent\@ScriptingEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct MutableScriptingGameplayEvent<enum class CoordinatorResult>>);
    /**
     * @symbol  ?sendEvent\@ScriptingEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$ScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct ScriptingGameplayEvent<enum class CoordinatorResult>>);

};