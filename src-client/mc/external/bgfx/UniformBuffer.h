#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

class UniformBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                    m_size;
    ::ll::TypedStorage<4, 4, uint>                    m_pos;
    ::ll::TypedStorage<1, 268435456, char[268435456]> m_buffer;
    // NOLINTEND
};

} // namespace bgfx
