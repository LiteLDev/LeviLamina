#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiling::Control {

enum class ProfilerControlTarget : int {
    Invalid              = 0,
    EntitySystemProfiler = 1,
    WhiskerProfiler      = 2,
};

}
