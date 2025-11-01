#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/block/definition/BlockComponentGroupDescription.h"

struct BlockPermutationDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode> mCondition;
    ::ll::TypedStorage<8, 112, ::BlockComponentGroupDescription> mComponents;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPermutationDescription(BlockPermutationDescription const&);
    BlockPermutationDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::BlockPermutationDescription& operator=(::BlockPermutationDescription const&);

    MCAPI ~BlockPermutationDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

};
