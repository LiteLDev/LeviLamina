#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SafeZoneScreenControllerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(float)>> mSetSafeZonePercent;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SafeZoneScreenControllerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
