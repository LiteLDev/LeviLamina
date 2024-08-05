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
    // vIndex: 0
    virtual ~ScriptingEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onEvent(struct ScriptingNotificationEvent const&);

    // NOLINTEND
};
