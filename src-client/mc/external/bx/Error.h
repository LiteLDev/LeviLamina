#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/StringView.h"

namespace bx {

class Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::bx::StringView> m_msg;
    ::ll::TypedStorage<4, 4, uint>              m_code;
    // NOLINTEND
};

} // namespace bx
