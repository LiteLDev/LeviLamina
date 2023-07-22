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
    ExtendedStreamReadResult() = delete;
#endif

public:
    /**
     * @symbol  ??1ExtendedStreamReadResult\@\@QEAA\@XZ
     */
    MCAPI ~ExtendedStreamReadResult();

};