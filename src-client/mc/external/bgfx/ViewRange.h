#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bgfx {

struct ViewRange {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, ushort> m_view;
    ::ll::TypedStorage<1, 1, uchar>  m_skipReset;
    ::ll::TypedStorage<4, 4, uint>   m_startIndex;
    ::ll::TypedStorage<4, 4, uint>   m_count;
    // NOLINTEND
};

} // namespace bgfx
