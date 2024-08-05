#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CaveFeatureUtils {

struct CarverConfiguration {
public:
    // prevent constructor by default
    CarverConfiguration& operator=(CarverConfiguration const&);
    CarverConfiguration(CarverConfiguration const&);
    CarverConfiguration();

public:
    // NOLINTBEGIN
    MCAPI ~CarverConfiguration();

    // NOLINTEND
};

}; // namespace CaveFeatureUtils
