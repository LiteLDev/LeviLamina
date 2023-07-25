#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptingNotificationEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINGNOTIFICATIONEVENT
public:
    ScriptingNotificationEvent& operator=(ScriptingNotificationEvent const&) = delete;
    ScriptingNotificationEvent(ScriptingNotificationEvent const&)            = delete;
    ScriptingNotificationEvent()                                             = delete;
#endif

public:
    /**
     * @symbol ??1ScriptingNotificationEvent\@\@QEAA\@XZ
     */
    MCAPI ~ScriptingNotificationEvent();
};
