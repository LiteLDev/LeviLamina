#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct AnimationCompleteFlag {

public:
    // prevent constructor by default
    AnimationCompleteFlag& operator=(AnimationCompleteFlag const&) = delete;
    AnimationCompleteFlag(AnimationCompleteFlag const&)            = delete;
    AnimationCompleteFlag()                                        = delete;
};

}; // namespace AgentComponents
