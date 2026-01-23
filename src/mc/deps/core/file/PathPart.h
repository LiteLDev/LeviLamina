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
    // member functions
    // NOLINTBEGIN
    MCNAPI char const* getUtf8CString() const;

    MCNAPI ~PathPart();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
