#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct AnimationShrugFlag {

public:
    // prevent constructor by default
    AnimationShrugFlag& operator=(AnimationShrugFlag const&) = delete;
    AnimationShrugFlag(AnimationShrugFlag const&)            = delete;
    AnimationShrugFlag()                                     = delete;
};

}; // namespace AgentComponents
