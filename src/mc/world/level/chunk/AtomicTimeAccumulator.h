#pragma once

#include "mc/_HeaderOutputPredefine.h"

class AtomicTimeAccumulator {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATOMICTIMEACCUMULATOR
public:
    AtomicTimeAccumulator& operator=(AtomicTimeAccumulator const&) = delete;
    AtomicTimeAccumulator(AtomicTimeAccumulator const&)            = delete;
#endif

public:
    /**
     * @symbol ??0AtomicTimeAccumulator\@\@QEAA\@XZ
     */
    MCAPI AtomicTimeAccumulator();
    /**
     * @symbol
     * ?addTime\@AtomicTimeAccumulator\@\@QEAAXAEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void addTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const&);
};
