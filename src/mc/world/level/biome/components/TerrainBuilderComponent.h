#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/components/BiomeComponentBase.h"
#include "mc/world/level/biome/components/SurfaceBuilderData.h"

struct TerrainBuilderComponent : public ::BiomeComponentBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::SurfaceBuilderData>                  mSurfaceBuilderData;
    ::ll::TypedStorage<8, 40, ::std::optional<::SurfaceBuilderData>> mSubsurfaceBuilderData;
    // NOLINTEND
};
