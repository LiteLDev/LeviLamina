#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

class UniformFloat {
public:
    // prevent constructor by default
    UniformFloat& operator=(UniformFloat const&);
    UniformFloat(UniformFloat const&);
    UniformFloat();

public:
    // NOLINTBEGIN
    // symbol: ?generateNext@UniformFloat@ValueProviders@@QEBAMAEAVRandom@@@Z
    MCAPI float generateNext(class Random& random) const;

    // NOLINTEND
};

}; // namespace ValueProviders
