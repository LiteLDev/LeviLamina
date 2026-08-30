#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class Random;
// clang-format on

class ILevelRandom {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ILevelRandom();

    virtual ::IRandom& getIRandom() = 0;

    virtual ::Random& getRandom() = 0;

    virtual ::Random& getThreadRandom() = 0;
    // NOLINTEND
};
