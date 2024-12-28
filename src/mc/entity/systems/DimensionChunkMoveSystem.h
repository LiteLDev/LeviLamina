#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

class DimensionChunkMoveSystem {
public:
    // prevent constructor by default
    DimensionChunkMoveSystem& operator=(DimensionChunkMoveSystem const&);
    DimensionChunkMoveSystem(DimensionChunkMoveSystem const&);
    DimensionChunkMoveSystem();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo createDimensionChunkMoveSystem();
    // NOLINTEND
};
