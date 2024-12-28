#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Xoroshiro128PlusPlus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk84d7b8;
    ::ll::UntypedStorage<8, 8> mUnk571258;
    // NOLINTEND

public:
    // prevent constructor by default
    Xoroshiro128PlusPlus& operator=(Xoroshiro128PlusPlus const&);
    Xoroshiro128PlusPlus(Xoroshiro128PlusPlus const&);
    Xoroshiro128PlusPlus();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI int64 nextLong();
    // NOLINTEND
};
