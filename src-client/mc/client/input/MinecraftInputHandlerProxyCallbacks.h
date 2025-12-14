#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

struct MinecraftInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void(bool)>>    mSetInputEnabled;
    ::ll::TypedStorage<8, 64, ::std::function<::InputMode()>> mGetCurrentInputMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MinecraftInputHandlerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
