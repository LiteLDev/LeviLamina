#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptingInitializeEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINGINITIALIZEEVENT
public:
    ScriptingInitializeEvent& operator=(ScriptingInitializeEvent const&) = delete;
    ScriptingInitializeEvent(ScriptingInitializeEvent const&)            = delete;
    ScriptingInitializeEvent()                                           = delete;
#endif

public:
    /**
     * @symbol ??1ScriptingInitializeEvent\@\@QEAA\@XZ
     */
    MCAPI ~ScriptingInitializeEvent();
};
