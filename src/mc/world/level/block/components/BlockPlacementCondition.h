#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockDescriptor.h"
#include "mc/world/level/block/components/BlockPlacementDirectionalFilter.h"

struct BlockPlacementCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockPlacementDirectionalFilter> directionalFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> blockFilter;
    // NOLINTEND
};
