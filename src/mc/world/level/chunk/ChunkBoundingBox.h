#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/BoundingBox.h"

namespace br {

struct ChunkBoundingBox {
public:
    static constexpr std::size_t page_size = 32;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 24, ::BoundingBox> box;
    // NOLINTEND
};

} // namespace br
