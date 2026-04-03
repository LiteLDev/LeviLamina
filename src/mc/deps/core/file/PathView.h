#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"
#include "mc/platform/brstd/basic_cstring_view.h"

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
    ::ll::TypedStorage<8, 16, ::brstd::basic_cstring_view<char, ::std::char_traits<char>>> mSrc;
    // NOLINTEND

public:
    // prevent constructor by default
    PathView();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit PathView(::Core::PathBuffer<::std::string> const& src);

    MCNAPI explicit PathView(::Core::Path const& src);

    MCNAPI bool operator==(::Core::PathView const& rhs) const;

    MCNAPI ~PathView();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& src);

    MCNAPI void* $ctor(::Core::PathBuffer<::std::string> const& src);

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
