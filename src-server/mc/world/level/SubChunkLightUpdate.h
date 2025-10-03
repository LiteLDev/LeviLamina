#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/world/level/SubChunkBlockPos.h"

struct SubChunkLightUpdate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SubChunkBlockPos> mPos;
    ::ll::TypedStorage<1, 1, ::Brightness>       mOldBrightness;
    ::ll::TypedStorage<1, 1, ::Brightness>       mNewBrightness;
    ::ll::TypedStorage<1, 1, ::Brightness>       mOldAbsorption;
    ::ll::TypedStorage<1, 1, ::Brightness>       mNewAbsorption;
    ::ll::TypedStorage<1, 1, bool>               mIsSkyLight;
    // NOLINTEND
};
