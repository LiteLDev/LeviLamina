#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkBlockPos {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::TypedStorage<1, 1, uchar> x;
            ::ll::TypedStorage<1, 1, uchar> y;
            ::ll::TypedStorage<1, 1, uchar> z;
        };
        ::ll::TypedStorage<4, 4, uint> packed;
    };
    // NOLINTEND
};
