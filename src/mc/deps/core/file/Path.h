#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathPart; }
namespace Core { class PathView; }
namespace Core { class Result; }
// clang-format on

namespace Core {

class Path {
public:
    // Path inner types declare
    // clang-format off
    struct path_less;
    // clang-format on

    // Path inner types define
    struct path_less {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathPart> mPathPart;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Path();

    MCAPI explicit Path(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

    MCAPI explicit Path(::Core::PathBuffer<::std::string> const&);

    MCAPI ~Path();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result makeFailure(char const* format, ::Core::PathView path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::Path const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const&);

    MCAPI void* $ctor(::Core::PathBuffer<::std::string> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
