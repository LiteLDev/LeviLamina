#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

enum class IslandTransition : int {
    Start = 0,
    Suspend = 1,
    Resume = 2,
    Stop = 3,
};

}
