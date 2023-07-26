#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StateAnimationVariable {

public:
    // prevent constructor by default
    StateAnimationVariable& operator=(StateAnimationVariable const&) = delete;
    StateAnimationVariable(StateAnimationVariable const&)            = delete;
    StateAnimationVariable()                                         = delete;
};
