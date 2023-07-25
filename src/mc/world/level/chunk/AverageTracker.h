#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct AverageTracker {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVERAGETRACKER
public:
    AverageTracker& operator=(AverageTracker const&) = delete;
    AverageTracker(AverageTracker const&)            = delete;
    AverageTracker()                                 = delete;
#endif

public:
    /**
     * @symbol ?addSample\@AverageTracker\@\@QEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void addSample(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);
};
