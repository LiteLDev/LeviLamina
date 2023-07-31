#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptingInitializeEvent {

public:
    // prevent constructor by default
    ScriptingInitializeEvent& operator=(ScriptingInitializeEvent const&) = delete;
    ScriptingInitializeEvent(ScriptingInitializeEvent const&)            = delete;
    ScriptingInitializeEvent()                                           = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??1ScriptingInitializeEvent\@\@QEAA\@XZ
     */
    MCAPI ~ScriptingInitializeEvent();
    // NOLINTEND
};
