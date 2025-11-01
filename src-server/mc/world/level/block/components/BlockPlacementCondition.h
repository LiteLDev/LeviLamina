#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockPlacementDirectionalFilter.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
// clang-format on

struct BlockPlacementCondition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::BlockPlacementDirectionalFilter> directionalFilter;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> blockFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BlockPlacementCondition();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

};
