#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct Memory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*> data;
    ::ll::TypedStorage<4, 4, uint>   size;
    // NOLINTEND
};

} // namespace bgfx
