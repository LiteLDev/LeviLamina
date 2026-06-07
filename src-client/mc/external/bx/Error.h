#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/StringView.h"

// auto generated forward declare list
// clang-format off
namespace bx { struct ErrorResult; }
// clang-format on

namespace bx {

class Error {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::bx::StringView> m_msg;
    ::ll::TypedStorage<4, 4, uint>              m_code;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setError(::bx::ErrorResult _errorResult, ::bx::StringView const& _msg);
    // NOLINTEND
};

} // namespace bx
