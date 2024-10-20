#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BinaryHeap {
public:
    // prevent constructor by default
    BinaryHeap& operator=(BinaryHeap const&);
    BinaryHeap(BinaryHeap const&);

public:
    // NOLINTBEGIN
    MCAPI BinaryHeap();

    MCAPI void changeCost(class PathfinderNode* node, float newCost);

    MCAPI void clear();

    MCAPI class PathfinderNode* insert(class PathfinderNode* node);

    MCAPI bool isEmpty();

    MCAPI class PathfinderNode* pop();

    MCAPI ~BinaryHeap();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void downHeap(int idx);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};
