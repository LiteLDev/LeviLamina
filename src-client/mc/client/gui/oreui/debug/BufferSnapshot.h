#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct BufferSnapshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> id;
    ::ll::TypedStorage<4, 4, uint> usedSize;
    ::ll::TypedStorage<4, 4, uint> size;
    // NOLINTEND
};

} // namespace OreUI
