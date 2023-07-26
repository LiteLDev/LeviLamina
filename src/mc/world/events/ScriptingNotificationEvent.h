#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptingNotificationEvent {

public:
    // prevent constructor by default
    ScriptingNotificationEvent& operator=(ScriptingNotificationEvent const&) = delete;
    ScriptingNotificationEvent(ScriptingNotificationEvent const&)            = delete;
    ScriptingNotificationEvent()                                             = delete;

public:
    /**
     * @symbol ??1ScriptingNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ScriptingNotificationEvent(); // NOLINT
};
