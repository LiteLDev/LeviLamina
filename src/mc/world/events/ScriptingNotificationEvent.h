#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptingNotificationEvent {
public:
    // prevent constructor by default
    ScriptingNotificationEvent& operator=(ScriptingNotificationEvent const&);
    ScriptingNotificationEvent(ScriptingNotificationEvent const&);
    ScriptingNotificationEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptingNotificationEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
