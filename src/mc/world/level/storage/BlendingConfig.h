#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlendingConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mCellsYInChunk;
    ::ll::TypedStorage<4, 4, int> mMaxHeight;
    ::ll::TypedStorage<4, 4, int> mMinHeight;
    ::ll::TypedStorage<4, 4, int> mQuartSubChunkCount;
    // NOLINTEND
};
