#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ValueProviders {

class UniformInt {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_VALUEPROVIDERS_UNIFORMINT
public:
    UniformInt& operator=(UniformInt const&) = delete;
    UniformInt(UniformInt const&)            = delete;
    UniformInt()                             = delete;
#endif

public:
    /**
     * @symbol ?generateNext\@UniformInt\@ValueProviders\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int generateNext(class Random&) const;
};

}; // namespace ValueProviders
