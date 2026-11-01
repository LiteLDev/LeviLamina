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
    ::ll::TypedStorage<8, 24, ::std::vector<::PathfinderNode*>> heap;
    ::ll::TypedStorage<4, 4, int>                               sizeVar;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void changeCost(::PathfinderNode* node, float newCost);

    MCAPI ::PathfinderNode* insert(::PathfinderNode* node);

    MCAPI ~BinaryHeap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
