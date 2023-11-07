#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ScriptingEventListener {
public:
    // prevent constructor by default
    ScriptingEventListener& operator=(ScriptingEventListener const&);
    ScriptingEventListener(ScriptingEventListener const&);
    ScriptingEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ScriptingEventListener@@UEAA@XZ
    virtual ~ScriptingEventListener() = default;

    // vIndex: 1, symbol: ?onEvent@ScriptingEventListener@@UEAA?AW4EventResult@@AEBUScriptingNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ScriptingNotificationEvent const&);

    // NOLINTEND
};
