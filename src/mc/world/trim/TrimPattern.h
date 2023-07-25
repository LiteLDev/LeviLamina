#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimPattern {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TRIMPATTERN
public:
    TrimPattern& operator=(TrimPattern const&) = delete;
    TrimPattern(TrimPattern const&)            = delete;
    TrimPattern()                              = delete;
#endif

public:
    /**
     * @symbol ??1TrimPattern\@\@QEAA\@XZ
     */
    MCAPI ~TrimPattern();
};
