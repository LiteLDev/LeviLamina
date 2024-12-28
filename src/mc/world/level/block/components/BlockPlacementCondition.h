#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk164653;
    ::ll::UntypedStorage<8, 24> mUnkaf5ea0;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlacementCondition& operator=(BlockPlacementCondition const&);
    BlockPlacementCondition(BlockPlacementCondition const&);
    BlockPlacementCondition();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockPlacementCondition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
