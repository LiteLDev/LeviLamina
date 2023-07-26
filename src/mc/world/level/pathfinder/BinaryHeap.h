#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BinaryHeap {

public:
    // prevent constructor by default
    BinaryHeap& operator=(BinaryHeap const&) = delete;
    BinaryHeap(BinaryHeap const&)            = delete;

public:
    /**
     * @symbol ??0BinaryHeap\@\@QEAA\@XZ
     */
    MCAPI BinaryHeap(); // NOLINT
    /**
     * @symbol ?changeCost\@BinaryHeap\@\@QEAAXPEAVPathfinderNode\@\@M\@Z
     */
    MCAPI void changeCost(class PathfinderNode*, float); // NOLINT
    /**
     * @symbol ?clear\@BinaryHeap\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?insert\@BinaryHeap\@\@QEAAPEAVPathfinderNode\@\@PEAV2\@\@Z
     */
    MCAPI class PathfinderNode* insert(class PathfinderNode*); // NOLINT
    /**
     * @symbol ?isEmpty\@BinaryHeap\@\@QEAA_NXZ
     */
    MCAPI bool isEmpty(); // NOLINT
    /**
     * @symbol ?pop\@BinaryHeap\@\@QEAAPEAVPathfinderNode\@\@XZ
     */
    MCAPI class PathfinderNode* pop(); // NOLINT
    /**
     * @symbol ??1BinaryHeap\@\@QEAA\@XZ
     */
    MCAPI ~BinaryHeap(); // NOLINT

    // private:
    /**
     * @symbol ?downHeap\@BinaryHeap\@\@AEAAXH\@Z
     */
    MCAPI void downHeap(int); // NOLINT

private:
};
