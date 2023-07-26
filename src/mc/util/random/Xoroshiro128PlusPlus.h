#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Xoroshiro128PlusPlus {

public:
    // prevent constructor by default
    Xoroshiro128PlusPlus& operator=(Xoroshiro128PlusPlus const&) = delete;
    Xoroshiro128PlusPlus(Xoroshiro128PlusPlus const&)            = delete;
    Xoroshiro128PlusPlus()                                       = delete;

public:
    /**
     * @symbol ?nextLong\@Xoroshiro128PlusPlus\@\@QEAA_JXZ
     */
    MCAPI __int64 nextLong(); // NOLINT
};
