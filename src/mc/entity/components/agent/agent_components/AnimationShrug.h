#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct AnimationShrug {
public:
    // prevent constructor by default
    AnimationShrug& operator=(AnimationShrug const&);
    AnimationShrug(AnimationShrug const&);
    AnimationShrug();
};

} // namespace AgentComponents
