/**
 * @file  MC/ExtendedStreamReadResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ExtendedStreamReadResult.
 *
 */
struct ExtendedStreamReadResult {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTENDEDSTREAMREADRESULT
public:
    struct ExtendedStreamReadResult& operator=(struct ExtendedStreamReadResult const &) = delete;
    ExtendedStreamReadResult(struct ExtendedStreamReadResult const &) = delete;
    ExtendedStreamReadResult() = delete;
#endif

public:
    /**
     * @hash   -1127577355
     * @symbol ??0ExtendedStreamReadResult@@QEAA@W4StreamReadResult@@@Z
     */
    MCAPI ExtendedStreamReadResult(enum StreamReadResult);
    /**
     * @hash   1046596342
     * @symbol ??1ExtendedStreamReadResult@@QEAA@XZ
     */
    MCAPI ~ExtendedStreamReadResult();

};