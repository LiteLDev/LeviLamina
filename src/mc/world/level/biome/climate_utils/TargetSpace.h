#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct TargetSpace {
public:
    // prevent constructor by default
    TargetSpace& operator=(TargetSpace const&);
    TargetSpace(TargetSpace const&);
    TargetSpace();
};

}; // namespace ClimateUtils
