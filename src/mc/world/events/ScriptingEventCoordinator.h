#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/CoordinatorResult.h"
#include "mc/events/MutableScriptingGameplayEvent.h"
#include "mc/external/scripting/ScriptingGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class ScriptingEventCoordinator {
public:
    // prevent constructor by default
    ScriptingEventCoordinator& operator=(ScriptingEventCoordinator const&);
    ScriptingEventCoordinator(ScriptingEventCoordinator const&);
    ScriptingEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptingEventCoordinator@@UEAA@XZ
    virtual ~ScriptingEventCoordinator() = default;

    // symbol: ?getScriptingEventHandler@ScriptingEventCoordinator@@QEAAAEAVScriptingEventHandler@@XZ
    MCAPI class ScriptingEventHandler& getScriptingEventHandler();

    // symbol:
    // ?registerScriptingEventHandler@ScriptingEventCoordinator@@QEAAX$$QEAV?$unique_ptr@VScriptingEventHandler@@U?$default_delete@VScriptingEventHandler@@@std@@@std@@@Z
    MCAPI void registerScriptingEventHandler(std::unique_ptr<class ScriptingEventHandler>&& handler);

    // symbol:
    // ?sendEvent@ScriptingEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableScriptingGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableScriptingGameplayEvent<::CoordinatorResult>> event
    );

    // symbol:
    // ?sendEvent@ScriptingEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$ScriptingGameplayEvent@W4CoordinatorResult@@@@@@@Z
    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct ScriptingGameplayEvent<::CoordinatorResult>> event);

    // NOLINTEND
};
