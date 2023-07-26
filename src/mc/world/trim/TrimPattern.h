#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TrimPattern {

public:
    // prevent constructor by default
    TrimPattern& operator=(TrimPattern const&) = delete;
    TrimPattern(TrimPattern const&)            = delete;
    TrimPattern()                              = delete;

public:
    /**
     * @symbol ??1TrimPattern\@\@QEAA\@XZ
     */
    MCAPI ~TrimPattern(); // NOLINT
};
