#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct TargetSpace {

public:
    // prevent constructor by default
    TargetSpace& operator=(TargetSpace const&) = delete;
    TargetSpace(TargetSpace const&)            = delete;
    TargetSpace()                              = delete;
};

}; // namespace ClimateUtils
