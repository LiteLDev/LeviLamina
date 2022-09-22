/**
 * @file  BinaryHeap.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -789809943
     * @symbol ??0BinaryHeap@@QEAA@XZ
     */
    MCAPI BinaryHeap();
    /**
     * @hash   1900934580
     * @symbol ?changeCost@BinaryHeap@@QEAAXPEAVPathfinderNode@@M@Z
     */
    MCAPI void changeCost(class PathfinderNode *, float);
    /**
     * @hash   1807721267
     * @symbol ?clear@BinaryHeap@@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @hash   -154523278
     * @symbol ?insert@BinaryHeap@@QEAAPEAVPathfinderNode@@PEAV2@@Z
     */
    MCAPI class PathfinderNode * insert(class PathfinderNode *);
    /**
     * @hash   342334556
     * @symbol ?isEmpty@BinaryHeap@@QEAA_NXZ
     */
    MCAPI bool isEmpty();
    /**
     * @hash   931869671
     * @symbol ?pop@BinaryHeap@@QEAAPEAVPathfinderNode@@XZ
     */
    MCAPI class PathfinderNode * pop();
    /**
     * @hash   1172112775
     * @symbol ??1BinaryHeap@@QEAA@XZ
     */
    MCAPI ~BinaryHeap();

//private:
    /**
     * @hash   -1083020174
     * @symbol ?downHeap@BinaryHeap@@AEAAXH@Z
     */
    MCAPI void downHeap(int);

private:

};