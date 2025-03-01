#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SubChunkPos;
// clang-format on

class SubChunkPosIterator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::SubChunkPos const> mMinCorner;
    ::ll::TypedStorage<4, 12, ::SubChunkPos const> mMaxCorner;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>       mCurrentPos;
    ::ll::TypedStorage<1, 1, bool>                 mDone;
    // NOLINTEND
};
