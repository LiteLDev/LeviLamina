#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Control {

enum class ProfilerControlAction : int {
    Invalid        = 0,
    Start          = 1,
    Stop           = 2,
    Clear          = 3,
    FilterToEntity = 4,
};

}
