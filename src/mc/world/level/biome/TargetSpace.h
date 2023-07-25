#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ClimateUtils {

struct TargetSpace {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIMATEUTILS_TARGETSPACE
public:
    TargetSpace& operator=(TargetSpace const&) = delete;
    TargetSpace(TargetSpace const&)            = delete;
    TargetSpace()                              = delete;
#endif

public:
};

}; // namespace ClimateUtils
