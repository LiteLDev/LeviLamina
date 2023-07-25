#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ValueProviders {

struct UniformFloat {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VALUEPROVIDERS_UNIFORMFLOAT
public:
    UniformFloat& operator=(UniformFloat const&) = delete;
    UniformFloat(UniformFloat const&)            = delete;
    UniformFloat()                               = delete;
#endif

public:
    /**
     * @symbol ?generateNext\@UniformFloat\@ValueProviders\@\@QEBAMAEAVRandom\@\@\@Z
     */
    MCAPI float generateNext(class Random&) const;
};

}; // namespace ValueProviders
