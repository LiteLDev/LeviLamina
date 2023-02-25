/**
 * @file  BinaryHeap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BinaryHeap.
 *
 */
class BinaryHeap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BINARYHEAP
public:
    class BinaryHeap& operator=(class BinaryHeap const &) = delete;
    BinaryHeap(class BinaryHeap const &) = delete;
#endif

public:
    /**
     * @symbol  ??0BinaryHeap\@\@QEAA\@XZ
     */
    MCAPI BinaryHeap();
    /**
     * @symbol  ?changeCost\@BinaryHeap\@\@QEAAXPEAVPathfinderNode\@\@M\@Z
     */
    MCAPI void changeCost(class PathfinderNode *, float);
    /**
     * @symbol  ?clear\@BinaryHeap\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol  ?insert\@BinaryHeap\@\@QEAAPEAVPathfinderNode\@\@PEAV2\@\@Z
     */
    MCAPI class PathfinderNode * insert(class PathfinderNode *);
    /**
     * @symbol  ?isEmpty\@BinaryHeap\@\@QEAA_NXZ
     */
    MCAPI bool isEmpty();
    /**
     * @symbol  ?pop\@BinaryHeap\@\@QEAAPEAVPathfinderNode\@\@XZ
     */
    MCAPI class PathfinderNode * pop();
    /**
     * @symbol  ??1BinaryHeap\@\@QEAA\@XZ
     */
    MCAPI ~BinaryHeap();

//private:
    /**
     * @symbol  ?downHeap\@BinaryHeap\@\@AEAAXH\@Z
     */
    MCAPI void downHeap(int);

private:

};