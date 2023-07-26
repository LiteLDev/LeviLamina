#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AverageTracker {

public:
    // prevent constructor by default
    AverageTracker& operator=(AverageTracker const&) = delete;
    AverageTracker(AverageTracker const&)            = delete;
    AverageTracker()                                 = delete;

public:
    /**
     * @symbol ?addSample\@AverageTracker\@\@QEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void addSample(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>); // NOLINT
};
