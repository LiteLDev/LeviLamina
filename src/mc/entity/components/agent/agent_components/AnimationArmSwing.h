#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace AgentComponents {

struct AnimationArmSwing {
public:
    // prevent constructor by default
    AnimationArmSwing& operator=(AnimationArmSwing const&);
    AnimationArmSwing(AnimationArmSwing const&);
    AnimationArmSwing();
};

} // namespace AgentComponents
