#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace EduCloud {

enum class ConflictResolutionStatus : int {
    CloudChange = 0,
    LocalChange = 1,
    BothChange  = 2,
    NoChange    = 3,
    Error       = 4,
};

}
