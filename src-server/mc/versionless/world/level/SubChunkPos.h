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
    MCNAPI static ::SubChunkPos const& MAX();

    MCNAPI static ::SubChunkPos const& MIN();

    MCNAPI static ::SubChunkPos const& ONE();

    MCNAPI static ::SubChunkPos const& ZERO();
    // NOLINTEND

};
