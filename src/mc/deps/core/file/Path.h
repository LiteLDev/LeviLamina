#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathPart.h"

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
    // prevent constructor by default
    Path& operator=(Path const&);
    Path(Path const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Path();

    MCFOLD_C char const* getUtf8CString() const;

    MCFOLD_C ::std::string_view getUtf8StringView() const;

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

    MCAPI_S void* $ctor(char const* str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
