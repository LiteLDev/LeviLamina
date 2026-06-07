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
    MCAPI ~TextInput();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
