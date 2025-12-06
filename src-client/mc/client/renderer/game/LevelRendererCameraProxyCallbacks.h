#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelRendererCameraProxyCallbacks {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnkbac717;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelRendererCameraProxyCallbacks& operator=(LevelRendererCameraProxyCallbacks const&);
    LevelRendererCameraProxyCallbacks(LevelRendererCameraProxyCallbacks const&);
    LevelRendererCameraProxyCallbacks();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~LevelRendererCameraProxyCallbacks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
