#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/container/EnumSet.h"
#include "mc/world/level/block/NeighborDirection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class NeighborBlockDirections {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ::Bedrock::EnumSet<::NeighborDirection, 14>> mDirections;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::NeighborBlockDirections
    createFromRelativePosition(::BlockPos const& pos, ::BlockPos const& neighborPos);
    // NOLINTEND
};
