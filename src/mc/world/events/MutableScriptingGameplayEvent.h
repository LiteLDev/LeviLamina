#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct MutableScriptingGameplayEvent {
public:
    // prevent constructor by default
    MutableScriptingGameplayEvent& operator=(MutableScriptingGameplayEvent const&);
    MutableScriptingGameplayEvent(MutableScriptingGameplayEvent const&);
    MutableScriptingGameplayEvent();
};
