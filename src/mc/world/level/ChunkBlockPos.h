#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/ChunkLocalHeight.h"

// auto generated forward declare list
// clang-format off
class ChunkLocalHeight;
// clang-format on

class ChunkBlockPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, uchar>              x;
    ::ll::TypedStorage<1, 1, uchar>              z;
    ::ll::TypedStorage<2, 2, ::ChunkLocalHeight> y;
    // NOLINTEND
};
