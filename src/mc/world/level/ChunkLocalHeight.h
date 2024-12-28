#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ChunkLocalHeight {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> mVal;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkLocalHeight& operator=(ChunkLocalHeight const&);
    ChunkLocalHeight(ChunkLocalHeight const&);
    ChunkLocalHeight();
};
