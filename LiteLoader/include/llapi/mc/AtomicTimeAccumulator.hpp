/**
 * @file  AtomicTimeAccumulator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class AtomicTimeAccumulator.
 *
 */
class AtomicTimeAccumulator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATOMICTIMEACCUMULATOR
public:
    class AtomicTimeAccumulator& operator=(class AtomicTimeAccumulator const &) = delete;
    AtomicTimeAccumulator(class AtomicTimeAccumulator const &) = delete;
#endif

public:
    /**
     * @symbol  ??0AtomicTimeAccumulator\@\@QEAA\@XZ
     */
    MCAPI AtomicTimeAccumulator();
    /**
     * @symbol  ?addTime\@AtomicTimeAccumulator\@\@QEAAXAEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    MCAPI void addTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &);
    /**
     * @symbol  ?reset\@AtomicTimeAccumulator\@\@QEAAXXZ
     */
    MCAPI void reset();

};