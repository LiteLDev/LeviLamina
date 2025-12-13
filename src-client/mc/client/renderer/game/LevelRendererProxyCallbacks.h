#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelRendererProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkded141;
    ::ll::UntypedStorage<8, 64> mUnk1eb983;
    ::ll::UntypedStorage<8, 64> mUnk7b00e0;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererProxyCallbacks& operator=(LevelRendererProxyCallbacks const&);
    LevelRendererProxyCallbacks(LevelRendererProxyCallbacks const&);
    LevelRendererProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelRendererProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
