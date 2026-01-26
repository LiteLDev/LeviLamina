#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

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
    ::ll::TypedStorage<8, 16, ::std::string_view> mSrc;
    // NOLINTEND

public:
    // prevent constructor by default
    PathView& operator=(PathView const&);
    PathView(PathView const&);
    PathView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathView(::Core::PathView&&);

    MCNAPI explicit PathView(::Core::PathBuffer<::std::string> const&);

    MCNAPI explicit PathView(::Core::Path const& src);

    MCNAPI auto operator==(::Core::PathView const& rhs) const;

    MCNAPI ~PathView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::PathView&&);

    MCNAPI void* $ctor(::Core::PathBuffer<::std::string> const&);

    MCNAPI_C void* $ctor(::std::string const& src);

    MCNAPI void* $ctor(::Core::Path const& src);

    MCNAPI_C void* $ctor(char const* src);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
