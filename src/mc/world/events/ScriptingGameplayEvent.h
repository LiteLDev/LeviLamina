#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct ScriptingGameplayEvent {
public:
    // prevent constructor by default
    ScriptingGameplayEvent& operator=(ScriptingGameplayEvent const&);
    ScriptingGameplayEvent(ScriptingGameplayEvent const&);
    ScriptingGameplayEvent();
};
