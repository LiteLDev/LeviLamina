#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/serialization/BiomeCappedSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeMesaSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeNoiseGradientSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialData.h"

struct BiomeSurfaceBuilderData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 28, ::std::optional<::BiomeSurfaceMaterialData>>       mSurfaceMaterials;
    ::ll::TypedStorage<1, 1, bool>                                               mHasDefaultOverworldSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasSwampSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasFrozenOceanSurface;
    ::ll::TypedStorage<1, 1, bool>                                               mHasTheEndSurface;
    ::ll::TypedStorage<4, 16, ::std::optional<::BiomeMesaSurfaceData>>           mMesaSurface;
    ::ll::TypedStorage<8, 80, ::std::optional<::BiomeCappedSurfaceData>>         mCappedSurface;
    ::ll::TypedStorage<8, 120, ::std::optional<::BiomeNoiseGradientSurfaceData>> mNoiseGradientSurface;
    // NOLINTEND
};
