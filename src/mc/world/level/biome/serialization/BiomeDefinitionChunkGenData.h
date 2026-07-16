#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/shared_types/VillageType.h"
#include "mc/world/level/biome/serialization/BiomeClimateData.h"
#include "mc/world/level/biome/serialization/BiomeConsolidatedFeaturesData.h"
#include "mc/world/level/biome/serialization/BiomeLegacyWorldGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeMountainParamsData.h"
#include "mc/world/level/biome/serialization/BiomeMultinoiseGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeOverworldGenRulesData.h"
#include "mc/world/level/biome/serialization/BiomeReplacementsData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceBuilderData.h"
#include "mc/world/level/biome/serialization/BiomeSurfaceMaterialAdjustmentData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
// clang-format on

struct BiomeDefinitionChunkGenData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 20, ::std::optional<::BiomeClimateData>>                   mClimate;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeConsolidatedFeaturesData>>      mConsolidatedFeatures;
    ::ll::TypedStorage<4, 16, ::std::optional<::BiomeMountainParamsData>>            mMountainParams;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeSurfaceMaterialAdjustmentData>> mSurfaceMaterialAdjustments;
    ::ll::TypedStorage<8, 176, ::std::optional<::BiomeOverworldGenRulesData>>        mOverworldGenRules;
    ::ll::TypedStorage<4, 24, ::std::optional<::BiomeMultinoiseGenRulesData>>        mMultinoiseGenRules;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeLegacyWorldGenRulesData>>       mLegacyWorldGenRules;
    ::ll::TypedStorage<8, 32, ::std::optional<::BiomeReplacementsData>>              mReplaceBiomes;
    ::ll::TypedStorage<1, 2, ::std::optional<::SharedTypes::VillageType>>            mVillageType;
    ::ll::TypedStorage<8, 256, ::std::optional<::BiomeSurfaceBuilderData>>           mSurfaceBuilderData;
    ::ll::TypedStorage<8, 256, ::std::optional<::BiomeSurfaceBuilderData>>           mSubsurfaceBuilderData;
    // NOLINTEND

public:
    // prevent constructor by default
    BiomeDefinitionChunkGenData& operator=(BiomeDefinitionChunkGenData const&);
    BiomeDefinitionChunkGenData(BiomeDefinitionChunkGenData const&);
    BiomeDefinitionChunkGenData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BiomeDefinitionChunkGenData(::BiomeDefinitionChunkGenData&&);

    MCAPI ::BiomeDefinitionChunkGenData& operator=(::BiomeDefinitionChunkGenData&&);

    MCAPI void write(::BinaryStream& stream) const;

    MCAPI ~BiomeDefinitionChunkGenData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BiomeDefinitionChunkGenData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
