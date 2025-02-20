#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class PathfinderNode;
// clang-format on

class BinaryHeap {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk3dbce0;
    ::ll::UntypedStorage<4, 4>  mUnkb6697e;
    // NOLINTEND

public:
    // prevent constructor by default
    BinaryHeap& operator=(BinaryHeap const&);
    BinaryHeap(BinaryHeap const&);
    BinaryHeap();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void changeCost(::PathfinderNode* node, float newCost);

    MCAPI ::PathfinderNode* insert(::PathfinderNode* node);

    MCAPI ::PathfinderNode* pop();

    MCAPI ~BinaryHeap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
