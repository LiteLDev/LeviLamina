#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/basic_cstring_view.h"

namespace Core {

class PathView {
public:
    // PathView inner types declare
    // clang-format off
    struct Hash;
    struct path_view_less;
    // clang-format on

    // PathView inner types define
    struct Hash {};

    struct path_view_less {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::brstd::basic_cstring_view<char, ::std::char_traits<char>>> mSrc;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::PathView const& EMPTY();
    // NOLINTEND
};

} // namespace Core
