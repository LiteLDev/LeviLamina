#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Xoroshiro128PlusPlus {
public:
    // prevent constructor by default
    Xoroshiro128PlusPlus& operator=(Xoroshiro128PlusPlus const&);
    Xoroshiro128PlusPlus(Xoroshiro128PlusPlus const&);
    Xoroshiro128PlusPlus();

public:
    // NOLINTBEGIN
    MCAPI int64 nextLong();

    // NOLINTEND
};
