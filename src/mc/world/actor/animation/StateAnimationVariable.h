#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StateAnimationVariable {
public:
    // prevent constructor by default
    StateAnimationVariable& operator=(StateAnimationVariable const&);
    StateAnimationVariable(StateAnimationVariable const&);
    StateAnimationVariable();

public:
    // NOLINTBEGIN
    MCAPI void addKeyFrame(float parameterValue, float blendValue);

    // NOLINTEND
};
