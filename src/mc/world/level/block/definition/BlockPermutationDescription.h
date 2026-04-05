#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/molang/ExpressionNode.h"
#include "mc/world/level/block/definition/BlockComponentGroupDescription.h"

struct BlockPermutationDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ExpressionNode>                  mCondition;
    ::ll::TypedStorage<8, 112, ::BlockComponentGroupDescription> mComponents;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    BlockPermutationDescription(BlockPermutationDescription const&);
    BlockPermutationDescription();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCAPI ::BlockPermutationDescription& operator=(::BlockPermutationDescription const&);
#endif

    MCAPI ~BlockPermutationDescription();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
