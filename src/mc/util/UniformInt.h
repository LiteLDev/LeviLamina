#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Random;
// clang-format on

namespace ValueProviders {

class UniformInt {

public:
    // prevent constructor by default
    UniformInt& operator=(UniformInt const&) = delete;
    UniformInt(UniformInt const&)            = delete;
    UniformInt()                             = delete;

public:
    /**
     * @symbol ?generateNext\@UniformInt\@ValueProviders\@\@QEBAHAEAVRandom\@\@\@Z
     */
    MCAPI int generateNext(class Random&) const; // NOLINT
};

}; // namespace ValueProviders
