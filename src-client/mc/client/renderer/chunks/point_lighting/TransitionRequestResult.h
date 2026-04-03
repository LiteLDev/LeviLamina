#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PointLighting {

enum class TransitionRequestResult : int {
    Rejected       = 0,
    InvalidRequest = 1,
    Success        = 2,
};

}
