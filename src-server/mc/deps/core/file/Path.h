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
    struct path_less {
    };
    
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
    MCNAPI Path();

    MCNAPI explicit Path(::std::string&& str);

    MCNAPI explicit Path(char const* str);

    MCNAPI ::Core::Path& operator=(::Core::Path&&);

    MCNAPI ~Path();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Core::Path const& EMPTY();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::std::string&& str);

    MCNAPI void* $ctor(char const* str);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
