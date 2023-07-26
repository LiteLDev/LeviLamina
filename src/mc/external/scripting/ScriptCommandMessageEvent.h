#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptCommandMessageEvent {

public:
    // prevent constructor by default
    ScriptCommandMessageEvent& operator=(ScriptCommandMessageEvent const&) = delete;
    ScriptCommandMessageEvent(ScriptCommandMessageEvent const&)            = delete;
    ScriptCommandMessageEvent()                                            = delete;

public:
    /**
     * @symbol ??1ScriptCommandMessageEvent\@\@QEAA\@XZ
     */
    MCAPI ~ScriptCommandMessageEvent(); // NOLINT
};
