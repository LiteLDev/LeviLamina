#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CanyonFeatureUtils {

struct CanyonConfiguration {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CANYONFEATUREUTILS_CANYONCONFIGURATION
public:
    CanyonConfiguration& operator=(CanyonConfiguration const&) = delete;
    CanyonConfiguration(CanyonConfiguration const&)            = delete;
    CanyonConfiguration()                                      = delete;
#endif

public:
};

}; // namespace CanyonFeatureUtils
