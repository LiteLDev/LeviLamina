#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MenuPointer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mPressed;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MenuPointer();

    MCFOLD bool isPressed();

    MCFOLD void setPressed(bool pressed);

    MCAPI ~MenuPointer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
