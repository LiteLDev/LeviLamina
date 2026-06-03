#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class SpScRingBufferControl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const> m_size;
    ::ll::TypedStorage<4, 4, uint>       m_current;
    ::ll::TypedStorage<4, 4, uint>       m_write;
    ::ll::TypedStorage<4, 4, uint>       m_read;
    // NOLINTEND
};

} // namespace bx
