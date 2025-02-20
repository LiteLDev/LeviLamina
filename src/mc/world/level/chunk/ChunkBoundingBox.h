#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br {

struct ChunkBoundingBox {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 24> mUnk98c483;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkBoundingBox& operator=(ChunkBoundingBox const&);
    ChunkBoundingBox(ChunkBoundingBox const&);
    ChunkBoundingBox();
};

} // namespace br
