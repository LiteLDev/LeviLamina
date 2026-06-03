#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class HashAdler32 {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint> m_a;
    ::ll::TypedStorage<4, 4, uint> m_b;
    // NOLINTEND
};

} // namespace bx
