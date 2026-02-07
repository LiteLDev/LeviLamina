#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BrewingStandScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<bool(int&, int&, int)>> mIsFinished;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BrewingStandScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
