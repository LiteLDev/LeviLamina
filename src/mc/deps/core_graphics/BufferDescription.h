#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg {

struct BufferDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> mStride;
    ::ll::TypedStorage<4, 4, uint> mCount;
    // NOLINTEND
};

} // namespace cg
