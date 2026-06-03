#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class HandleAlloc {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> m_numHandles;
    ::ll::TypedStorage<2, 2, ushort> m_maxHandles;
    // NOLINTEND
};

} // namespace bx
