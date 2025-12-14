#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/Brightness.h"
#include "mc/world/level/chunk/SubChunkLightIndex.h"

struct SubtractiveLightInfo {
public:
    // member variables
    // NOLINTBEGIN
    union {
        struct {
            ::ll::TypedStorage<4, 4, ::SubChunkLightIndex> mCoordIndex;
            ::ll::TypedStorage<1, 1, ::Brightness>         mOldBrightness;
        };
        ::ll::TypedStorage<8, 8, uint64> mData;
    };
    // NOLINTEND
};
