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
    ClampedNormalFloat& operator=(ClampedNormalFloat const&) = delete;
    ClampedNormalFloat(ClampedNormalFloat const&)            = delete;
    ClampedNormalFloat()                                     = delete;

public:
    /**
     * @symbol ?generateNext\@ClampedNormalFloat\@ValueProviders\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float generateNext(class Random&) const; // NOLINT
    /**
     * @symbol ?generateNext\@ClampedNormalFloat\@ValueProviders\@\@SAMAEAVRandom\@\@MMMM\@Z
     */
    MCAPI static float generateNext(class Random&, float, float, float, float); // NOLINT
};

}; // namespace ValueProviders
