#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

struct UniformFloat {
public:
    // prevent constructor by default
    UniformFloat& operator=(UniformFloat const&);
    UniformFloat(UniformFloat const&);
    UniformFloat();

public:
    // NOLINTBEGIN
    MCAPI float generateNext(class Random& random) const;

    // NOLINTEND
};

}; // namespace ValueProviders
