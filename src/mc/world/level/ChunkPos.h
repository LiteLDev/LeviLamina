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
    MCNAPI static ::ChunkPos const& INVALID();

    MCNAPI static ::ChunkPos const& MAX();

    MCNAPI static ::ChunkPos const& MIN();

    MCNAPI static ::ChunkPos const& ONE();
    // NOLINTEND
};
