#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class PathPart {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mUtf8StdString;
    // NOLINTEND

public:
    // prevent constructor by default
    PathPart();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PathPart(char const* pCStr, uint64 size);

    MCNAPI PathPart(::gsl::not_null<char const*> pCStr, uint64 size);

    MCNAPI ~PathPart();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const* pCStr, uint64 size);

    MCNAPI void* $ctor(::gsl::not_null<char const*> pCStr, uint64 size);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
