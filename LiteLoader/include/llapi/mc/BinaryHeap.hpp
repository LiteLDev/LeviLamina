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
     * @hash   -79930775
     * @symbol  ??0BinaryHeap\@\@QEAA\@XZ
     */
    MCAPI BinaryHeap();
    /**
     * @hash   -1684153548
     * @symbol  ?changeCost\@BinaryHeap\@\@QEAAXPEAVPathfinderNode\@\@M\@Z
     */
    MCAPI void changeCost(class PathfinderNode *, float);
    /**
     * @hash   -1777366861
     * @symbol  ?clear\@BinaryHeap\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   555355890
     * @symbol  ?insert\@BinaryHeap\@\@QEAAPEAVPathfinderNode\@\@PEAV2\@\@Z
     */
    MCAPI class PathfinderNode * insert(class PathfinderNode *);
    /**
     * @hash   1842458652
     * @symbol  ?isEmpty\@BinaryHeap\@\@QEAA_NXZ
     */
    MCAPI bool isEmpty();
    /**
     * @hash   1641764215
     * @symbol  ?pop\@BinaryHeap\@\@QEAAPEAVPathfinderNode\@\@XZ
     */
    MCAPI class PathfinderNode * pop();
    /**
     * @hash   961861351
     * @symbol  ??1BinaryHeap\@\@QEAA\@XZ
     */
    MCAPI ~BinaryHeap();

//private:
    /**
     * @hash   -373141006
     * @symbol  ?downHeap\@BinaryHeap\@\@AEAAXH\@Z
     */
    MCAPI void downHeap(int);

private:

};