#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class FetchStatus : int {
    Idle       = 0,
    InProgress = 1,
    Succeeded  = 2,
    Failed     = 3,
};

}
