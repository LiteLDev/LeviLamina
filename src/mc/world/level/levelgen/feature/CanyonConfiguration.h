#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CanyonFeatureUtils {

struct CanyonConfiguration {

public:
    // prevent constructor by default
    CanyonConfiguration& operator=(CanyonConfiguration const&) = delete;
    CanyonConfiguration(CanyonConfiguration const&)            = delete;
    CanyonConfiguration()                                      = delete;
};

}; // namespace CanyonFeatureUtils
