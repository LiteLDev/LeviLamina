#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TouchContactPoints {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 48, ::std::array<int, 12>> mTouchIDLookup;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TouchContactPoints();

    MCAPI int getContactIndex(int dwID);

    MCAPI void resetContactIndex(int dwID);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();
    // NOLINTEND
};
