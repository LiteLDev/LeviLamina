#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

enum class OverrideType : int {
    Deprecated = 0,
    Overridden = 1,
};

}
