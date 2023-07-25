#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Xoroshiro128PlusPlus {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XOROSHIRO128PLUSPLUS
public:
    Xoroshiro128PlusPlus& operator=(Xoroshiro128PlusPlus const&) = delete;
    Xoroshiro128PlusPlus(Xoroshiro128PlusPlus const&)            = delete;
    Xoroshiro128PlusPlus()                                       = delete;
#endif

public:
    /**
     * @symbol ?nextLong\@Xoroshiro128PlusPlus\@\@QEAA_JXZ
     */
    MCAPI __int64 nextLong();
};
