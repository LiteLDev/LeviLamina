#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ValueProviders {

class ClampedNormalFloat {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VALUEPROVIDERS_CLAMPEDNORMALFLOAT
public:
    ClampedNormalFloat& operator=(ClampedNormalFloat const&) = delete;
    ClampedNormalFloat(ClampedNormalFloat const&)            = delete;
    ClampedNormalFloat()                                     = delete;
#endif

public:
    /**
     * @symbol ?generateNext\@ClampedNormalFloat\@ValueProviders\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float generateNext(class Random&) const;
    /**
     * @symbol ?generateNext\@ClampedNormalFloat\@ValueProviders\@\@SAMAEAVRandom\@\@MMMM\@Z
     */
    MCAPI static float generateNext(class Random&, float, float, float, float);
};

}; // namespace ValueProviders
