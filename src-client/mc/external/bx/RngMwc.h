#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class RngMwc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_z;
    ::ll::TypedStorage<4, 4, uint> m_w;
    // NOLINTEND
};

} // namespace bx
