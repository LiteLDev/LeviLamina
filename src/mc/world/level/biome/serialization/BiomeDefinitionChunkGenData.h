#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/level/biome/serialization/BiomeCappedSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeClimateData.h"
#include "mc/world/level/biome/serialization/BiomeConsolidatedFeaturesData.h"
#include "mc/world/level/biome/serialization/BiomeLegacyWorldGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeMesaSurfaceData.h"
#include "mc/world/level/biome/serialization/BiomeMountainParamsData.h"
#include "mc/world/level/biome/serialization/BiomeMultinoiseGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeOverworldGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeReplacementsData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialAdjustmentData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

struct BiomeDefinitionChunkGenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::std::optional<::BiomeClimateData>>                   mClimate;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeConsolidatedFeaturesData>>      mConsolidatedFeatures;
    ::ll::TypedStorage<4, 16, ::std::optional<::BiomeMountainParamsData>>            mMountainParams;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeSurfaceMaterialAdjustmentData>> mSurfaceMaterialAdjustments;
    ::ll::TypedStorage<4, 28, ::std::optional<::BiomeSurfaceMaterialData>>           mSurfaceMaterials;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasDefaultOverworldSurface;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasSwampSurface;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasFrozenOceanSurface;
    ::ll::TypedStorage<1, 1, bool>                                                   mHasTheEndSurface;
    ::ll::TypedStorage<4, 16, ::std::optional<::BiomeMesaSurfaceData>>               mMesaSurface;
    ::ll::TypedStorage<8, 80, ::std::optional<::BiomeCappedSurfaceData>>             mCappedSurface;
    ::ll::TypedStorage<8, 176, ::std::optional<::BiomeOverworldGenRulesData>>        mOverworldGenRules;
    ::ll::TypedStorage<4, 24, ::std::optional<::BiomeMultinoiseGenRulesData>>        mMultinoiseGenRules;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeLegacyWorldGenRulesData>>       mLegacyWorldGenRules;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeReplacementsData>>              mReplaceBiomes;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeDefinitionChunkGenData& operator=(BiomeDefinitionChunkGenData const&);
    BiomeDefinitionChunkGenData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BiomeDefinitionChunkGenData(::BiomeDefinitionChunkGenData&&);

    MCNAPI BiomeDefinitionChunkGenData(::BiomeDefinitionChunkGenData const&);

    MCNAPI ::BiomeDefinitionChunkGenData& operator=(::BiomeDefinitionChunkGenData&&);

    MCNAPI void write(::BinaryStream& stream) const;

    MCNAPI ~BiomeDefinitionChunkGenData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::BiomeDefinitionChunkGenData> read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::BiomeDefinitionChunkGenData&&);

    MCNAPI void* $ctor(::BiomeDefinitionChunkGenData const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
