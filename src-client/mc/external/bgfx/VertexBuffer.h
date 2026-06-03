#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct VertexBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>   m_size;
    ::ll::TypedStorage<2, 2, ushort> m_stride;
    // NOLINTEND
};

} // namespace bgfx
