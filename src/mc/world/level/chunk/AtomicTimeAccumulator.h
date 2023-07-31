#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicTimeAccumulator {

public:
    // prevent constructor by default
    AtomicTimeAccumulator& operator=(AtomicTimeAccumulator const&) = delete;
    AtomicTimeAccumulator(AtomicTimeAccumulator const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0AtomicTimeAccumulator\@\@QEAA\@XZ
     */
    MCAPI AtomicTimeAccumulator();
    /**
     * @symbol
     * ?addTime\@AtomicTimeAccumulator\@\@QEAAXAEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void addTime(std::chrono::nanoseconds const&);
    // NOLINTEND
};
