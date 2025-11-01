#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/NeighborDirection.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class NeighborBlockDirections {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnk4f5df1;
    // NOLINTEND

public:
    // prevent constructor by default
    NeighborBlockDirections& operator=(NeighborBlockDirections const&);
    NeighborBlockDirections(NeighborBlockDirections const&);
    NeighborBlockDirections();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit NeighborBlockDirections(::NeighborDirection direction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::NeighborBlockDirections
    createFromRelativePosition(::BlockPos const& pos, ::BlockPos const& neighborPos);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::NeighborDirection direction);
    // NOLINTEND
};
