#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Poi {

struct BlockRelPos {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6cb247;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockRelPos& operator=(BlockRelPos const&);
    BlockRelPos(BlockRelPos const&);
    BlockRelPos();
};

} // namespace Poi
