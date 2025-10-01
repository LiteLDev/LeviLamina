#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class DeprecationState : int {
    None       = 0,
    Deprecated = 1,
    Overridden = 2,
};

}
