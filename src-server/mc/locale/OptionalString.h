#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OptionalString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>           valid;
    ::ll::TypedStorage<8, 32, ::std::string> string;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~OptionalString();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
