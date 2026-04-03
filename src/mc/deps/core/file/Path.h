#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/string/BasicStackString.h"

// auto generated forward declare list
// clang-format off
namespace Core { class PathPart; }
// clang-format on

namespace Core {

class Path : public ::Core::PathBuffer<::std::string> {
public:
    // prevent constructor by default
    Path& operator=(Path const&);
    Path(Path const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Path();

    MCAPI explicit Path(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& rhs);

    MCAPI explicit Path(::Core::PathPart const&);

    MCFOLD ::Core::Path& operator=(::Core::Path&&);

    MCAPI ~Path();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::Path const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCAPI void* $ctor(::Core::PathBuffer<::Core::BasicStackString<char, 1024>> const& rhs);

    MCAPI void* $ctor(::Core::PathPart const&);

    MCFOLD_S void* $ctor(char const* s);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
