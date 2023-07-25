#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct ScriptingGameplayEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTINGGAMEPLAYEVENT
public:
    ScriptingGameplayEvent& operator=(ScriptingGameplayEvent const&) = delete;
    ScriptingGameplayEvent(ScriptingGameplayEvent const&)            = delete;
    ScriptingGameplayEvent()                                         = delete;
#endif

public:
};
