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
    // vIndex: 0
    virtual ~ILevelRandom() = default;

    // vIndex: 1
    virtual ::IRandom& getIRandom() = 0;

    // vIndex: 2
    virtual ::Random& getRandom() = 0;

    // vIndex: 3
    virtual ::Random& getThreadRandom() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
