#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PaddleBehaviorUtility {

struct PaddleForces {
public:
    // prevent constructor by default
    PaddleForces& operator=(PaddleForces const&);
    PaddleForces(PaddleForces const&);
    PaddleForces();
};

}; // namespace PaddleBehaviorUtility
