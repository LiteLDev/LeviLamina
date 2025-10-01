#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementDirectionalFilter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkcdca40;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockPlacementDirectionalFilter& operator=(BlockPlacementDirectionalFilter const&);
    BlockPlacementDirectionalFilter(BlockPlacementDirectionalFilter const&);
    BlockPlacementDirectionalFilter();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void fromStringVector(::BlockPlacementDirectionalFilter& instance, ::std::vector<::std::string> faces);
    // NOLINTEND
};
