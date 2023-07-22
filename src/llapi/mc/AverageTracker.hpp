/**
 * @file  AverageTracker.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


struct AverageTracker {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AVERAGETRACKER
public:
    struct AverageTracker& operator=(struct AverageTracker const &) = delete;
    AverageTracker(struct AverageTracker const &) = delete;
    AverageTracker() = delete;
#endif

public:
    /**
     * @symbol  ?addSample\@AverageTracker\@\@QEAAXV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void addSample(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>);

};