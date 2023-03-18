/**
 * @file  ExtendedStreamReadResult.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ExtendedStreamReadResult.
 *
 */
struct ExtendedStreamReadResult {

#define AFTER_EXTRA
    StreamReadResult result;
    std::string resultContext;
#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXTENDEDSTREAMREADRESULT
public:
    struct ExtendedStreamReadResult& operator=(struct ExtendedStreamReadResult const &) = delete;
    ExtendedStreamReadResult(struct ExtendedStreamReadResult const &) = delete;
#endif

public:
    /**
     * @symbol ??0ExtendedStreamReadResult\@\@QEAA\@W4StreamReadResult\@\@\@Z
     */
    MCAPI ExtendedStreamReadResult(enum class StreamReadResult);
    /**
     * @symbol ??0ExtendedStreamReadResult\@\@QEAA\@XZ
     */
    MCAPI ExtendedStreamReadResult();
    /**
     * @symbol ??1ExtendedStreamReadResult\@\@QEAA\@XZ
     */
    MCAPI ~ExtendedStreamReadResult();

};