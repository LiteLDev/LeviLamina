#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bgfx/IndexBufferHandle.h"

namespace bgfx {

struct TransientIndexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uchar*>                    data;
    ::ll::TypedStorage<4, 4, uint>                      size;
    ::ll::TypedStorage<4, 4, uint>                      startIndex;
    ::ll::TypedStorage<2, 2, ::bgfx::IndexBufferHandle> handle;
    // NOLINTEND
};

} // namespace bgfx
