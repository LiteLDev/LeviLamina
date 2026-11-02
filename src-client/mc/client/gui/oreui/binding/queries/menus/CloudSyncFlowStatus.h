#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class CloudSyncFlowStatus : uchar {
    Waiting   = 0,
    Error     = 1,
    Done      = 2,
    Idle      = 3,
    Resolving = 4,
};

}
