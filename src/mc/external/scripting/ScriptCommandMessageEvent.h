#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScriptCommandMessageEvent {
public:
    // prevent constructor by default
    ScriptCommandMessageEvent& operator=(ScriptCommandMessageEvent const&);
    ScriptCommandMessageEvent(ScriptCommandMessageEvent const&);
    ScriptCommandMessageEvent();

public:
    // NOLINTBEGIN
    MCAPI ~ScriptCommandMessageEvent();

    // NOLINTEND
};
