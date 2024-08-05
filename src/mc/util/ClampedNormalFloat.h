#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

class ClampedNormalFloat {
public:
    // prevent constructor by default
    ClampedNormalFloat& operator=(ClampedNormalFloat const&);
    ClampedNormalFloat(ClampedNormalFloat const&);
    ClampedNormalFloat();

public:
    // NOLINTBEGIN
    MCAPI float generateNext(class Random& random) const;

    MCAPI static float generateNext(class Random& random, float, float, float min, float max);

    // NOLINTEND
};

}; // namespace ValueProviders
