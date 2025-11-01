#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PredictedMovementSystem {

struct SystemUniforms {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk13d5e4;
    ::ll::UntypedStorage<8, 8> mUnk8df810;
    // NOLINTEND

public:
    // prevent constructor by default
    SystemUniforms& operator=(SystemUniforms const&);
    SystemUniforms(SystemUniforms const&);
    SystemUniforms();

};

}
