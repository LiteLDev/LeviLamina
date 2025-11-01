#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deviceinfo/DeviceMemoryTier.h"
#include "mc/options/GraphicsMode.h"
#include "mc/options/UIProfile.h"

struct SyncedClientOptionsComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::DeviceMemoryTier> mMemoryTier;
    ::ll::TypedStorage<4, 4, int> mMaxViewDistance;
    ::ll::TypedStorage<1, 1, ::GraphicsMode> mGraphicsMode;
    ::ll::TypedStorage<4, 4, ::UIProfile> mUIProfile;
    // NOLINTEND

};
