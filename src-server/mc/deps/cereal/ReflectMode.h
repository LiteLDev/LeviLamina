#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal {

enum class ReflectMode : int {
    Init        = 0,
    Append      = 1,
    Replace     = 2,
    Placeholder = 3,
};

}
