#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace bx {

class StringView {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, char const*> m_ptr;
    ::ll::TypedStorage<4, 4, int>         m_len;
    // NOLINTEND
};

} // namespace bx
