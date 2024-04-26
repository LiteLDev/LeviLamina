#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PredictedMovementSystem {

struct SystemUniforms {
public:
    // prevent constructor by default
    SystemUniforms& operator=(SystemUniforms const&);
    SystemUniforms(SystemUniforms const&);
    SystemUniforms();
};

}; // namespace PredictedMovementSystem
