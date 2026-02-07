#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClientBlockPipeline {

enum class Status : int {
    Success      = 0,
    CycleCreated = 1,
    InvalidStep  = 2,
};

}
