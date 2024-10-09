#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CanyonFeatureUtils {

struct CanyonConfiguration {
public:
    // prevent constructor by default
    CanyonConfiguration& operator=(CanyonConfiguration const&);
    CanyonConfiguration(CanyonConfiguration const&);
    CanyonConfiguration();
};

}; // namespace CanyonFeatureUtils
