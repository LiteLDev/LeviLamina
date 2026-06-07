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
    // prevent constructor by default
    PathView& operator=(PathView const&);
    PathView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathView(::Core::PathView&&);

    MCNAPI PathView(::Core::PathView const&);

    MCNAPI ::Core::PathView& operator=(::Core::PathView&&);

    MCNAPI ~PathView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathView&&);

    MCNAPI void* $ctor(::Core::PathView const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
