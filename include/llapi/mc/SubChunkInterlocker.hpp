/**
 * @file  SubChunkInterlocker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SubChunkInterlocker.
 *
 */
class SubChunkInterlocker {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SUBCHUNKINTERLOCKER
public:
    class SubChunkInterlocker& operator=(class SubChunkInterlocker const &) = delete;
    SubChunkInterlocker(class SubChunkInterlocker const &) = delete;
    SubChunkInterlocker() = delete;
#endif

public:
    /**
     * @symbol  ?tryLock3x3xN\@SubChunkInterlocker\@\@QEAA_NAEBVSubChunkPos\@\@H\@Z
     */
    MCAPI bool tryLock3x3xN(class SubChunkPos const &, int);
    /**
     * @symbol  ?unlock3x3xN\@SubChunkInterlocker\@\@QEAAXAEBVSubChunkPos\@\@H\@Z
     */
    MCAPI void unlock3x3xN(class SubChunkPos const &, int);

};