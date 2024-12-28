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
    PathPart& operator=(PathPart const&);
    PathPart(PathPart const&);
    PathPart();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~PathPart();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
