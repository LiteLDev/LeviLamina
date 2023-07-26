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
    UniformFloat& operator=(UniformFloat const&) = delete;
    UniformFloat(UniformFloat const&)            = delete;
    UniformFloat()                               = delete;

public:
    /**
     * @symbol ?generateNext\@UniformFloat\@ValueProviders\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float generateNext(class Random&) const; // NOLINT
};

}; // namespace ValueProviders
