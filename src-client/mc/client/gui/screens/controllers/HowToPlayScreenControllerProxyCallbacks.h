#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct HowToPlayScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(int)>> mChangeTab;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~HowToPlayScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
