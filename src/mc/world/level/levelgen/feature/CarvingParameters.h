#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CaveFeatureUtils {

struct CarvingParameters {

public:
    // prevent constructor by default
    CarvingParameters& operator=(CarvingParameters const&) = delete;
    CarvingParameters(CarvingParameters const&)            = delete;
    CarvingParameters()                                    = delete;
};

}; // namespace CaveFeatureUtils
