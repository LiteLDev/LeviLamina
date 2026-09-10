#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ChunkKeyUtil {

struct ChunkPosData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> x;
    ::ll::TypedStorage<4, 4, int> z;
    // NOLINTEND
};

} // namespace ChunkKeyUtil
