#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct ChunkRelPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2> mUnkaf6c8c;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkRelPos& operator=(ChunkRelPos const&);
    ChunkRelPos(ChunkRelPos const&);
    ChunkRelPos();
};

} // namespace Poi
