#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct UriData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> uri;
    ::ll::TypedStorage<1, 1, bool>           hasHomeButton;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~UriData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
