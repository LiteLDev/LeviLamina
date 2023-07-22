/**
 * @file  Xoroshiro128PlusPlus.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class Xoroshiro128PlusPlus.
 *
 */
class Xoroshiro128PlusPlus {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_XOROSHIRO128PLUSPLUS
public:
    class Xoroshiro128PlusPlus& operator=(class Xoroshiro128PlusPlus const &) = delete;
    Xoroshiro128PlusPlus(class Xoroshiro128PlusPlus const &) = delete;
    Xoroshiro128PlusPlus() = delete;
#endif

public:
    /**
     * @symbol  ?nextLong\@Xoroshiro128PlusPlus\@\@QEAA_JXZ
     */
    MCAPI __int64 nextLong();

};