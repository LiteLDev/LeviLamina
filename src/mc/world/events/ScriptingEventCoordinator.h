#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MutableScriptingGameplayEvent.h"
#include "mc/external/scripting/ScriptingGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class ScriptingEventCoordinator {

public:
    // prevent constructor by default
    ScriptingEventCoordinator& operator=(ScriptingEventCoordinator const&) = delete;
    ScriptingEventCoordinator(ScriptingEventCoordinator const&)            = delete;
    ScriptingEventCoordinator()                                            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getScriptingEventHandler\@ScriptingEventCoordinator\@\@QEAAAEAVScriptingEventHandler\@\@XZ
     */
    MCAPI class ScriptingEventHandler& getScriptingEventHandler();
    /**
     * @symbol
     * ?registerScriptingEventHandler\@ScriptingEventCoordinator\@\@QEAAX$$QEAV?$unique_ptr\@VScriptingEventHandler\@\@U?$default_delete\@VScriptingEventHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerScriptingEventHandler(std::unique_ptr<class ScriptingEventHandler>&&);
    /**
     * @symbol
     * ?sendEvent\@ScriptingEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
        sendEvent(class EventRef<struct MutableScriptingGameplayEvent<enum class CoordinatorResult>>);
    /**
     * @symbol
     * ?sendEvent\@ScriptingEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$ScriptingGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
        sendEvent(class EventRef<struct ScriptingGameplayEvent<enum class CoordinatorResult>>);
    // NOLINTEND
};
