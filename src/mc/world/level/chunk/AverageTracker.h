#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AverageTracker {

public:
    // prevent constructor by default
    AverageTracker& operator=(AverageTracker const&) = delete;
    AverageTracker(AverageTracker const&)            = delete;
    AverageTracker()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?addSample\@AverageTracker\@\@QEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void addSample(std::chrono::nanoseconds);
    // NOLINTEND
};
