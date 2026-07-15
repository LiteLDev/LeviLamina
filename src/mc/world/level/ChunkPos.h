#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkPos {
public:
    // member variables
    // NOLINTBEGIN
    union {
        ::ll::TypedStorage<8, 8, int64> packed;
        struct {
            ::ll::TypedStorage<4, 4, int> x;
            ::ll::TypedStorage<4, 4, int> z;
        };
    };
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ChunkPos const& INVALID();

    MCAPI static ::ChunkPos const& MAX();

    MCAPI static ::ChunkPos const& MIN();

    MCAPI static ::ChunkPos const& ONE();
    // NOLINTEND
};
