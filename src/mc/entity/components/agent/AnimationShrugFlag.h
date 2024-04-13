#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct AnimationShrugFlag {
public:
    // prevent constructor by default
    AnimationShrugFlag& operator=(AnimationShrugFlag const&);
    AnimationShrugFlag(AnimationShrugFlag const&);
    AnimationShrugFlag();
};

}; // namespace AgentComponents
