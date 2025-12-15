#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ResetCallbackObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mCallbackReady;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResetCallbackObject();

    virtual void resetCallback() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
