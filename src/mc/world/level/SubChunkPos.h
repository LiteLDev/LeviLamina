#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> y;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::SubChunkPos const& MAX();

    MCAPI static ::SubChunkPos const& MIN();

    MCAPI static ::SubChunkPos const& ONE();

    MCAPI static ::SubChunkPos const& ZERO();
    // NOLINTEND
};
