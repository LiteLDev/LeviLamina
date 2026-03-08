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
    MCFOLD char const* getUtf8CString() const;

    MCAPI ~PathPart();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
