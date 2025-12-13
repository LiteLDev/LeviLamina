#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MinecraftInputHandlerProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk669ef0;
    ::ll::UntypedStorage<8, 64> mUnkecc26a;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftInputHandlerProxyCallbacks& operator=(MinecraftInputHandlerProxyCallbacks const&);
    MinecraftInputHandlerProxyCallbacks(MinecraftInputHandlerProxyCallbacks const&);
    MinecraftInputHandlerProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftInputHandlerProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
