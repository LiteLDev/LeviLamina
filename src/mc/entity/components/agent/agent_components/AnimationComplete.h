#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct AnimationComplete {
public:
    // prevent constructor by default
    AnimationComplete& operator=(AnimationComplete const&);
    AnimationComplete(AnimationComplete const&);
    AnimationComplete();
};

} // namespace AgentComponents
