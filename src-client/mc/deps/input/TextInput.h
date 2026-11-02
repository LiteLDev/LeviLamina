#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TextInput {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> text;
    ::ll::TypedStorage<4, 4, int>            controllerId;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~TextInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
