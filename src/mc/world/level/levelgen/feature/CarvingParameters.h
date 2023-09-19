#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CaveFeatureUtils {

struct CarvingParameters {
public:
    // prevent constructor by default
    CarvingParameters& operator=(CarvingParameters const&);
    CarvingParameters(CarvingParameters const&);
    CarvingParameters();
};

}; // namespace CaveFeatureUtils
