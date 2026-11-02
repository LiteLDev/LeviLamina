#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/biome/climate_utils/Parameter.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Biome;
class BiomeRegistry;
class Experiments;
struct BiomeNoiseTarget;
// clang-format on

class OverworldBiomeBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter const>                   FROZEN_RANGE;
    ::ll::TypedStorage<8, 16, ::ClimateUtils::Parameter const>                   UNFROZEN_RANGE;
    ::ll::TypedStorage<2, 20, ::BiomeIdType[2][5]>                               OCEANS_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               MIDDLE_BIOMES_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               MIDDLE_BIOMES_VARIANT_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               PLATEAU_BIOMES_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               PLATEAU_BIOMES_IDS_1_21_60;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               PLATEAU_BIOMES_VARIANT_IDS;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               PLATEAU_BIOMES_VARIANT_IDS_1_21_60;
    ::ll::TypedStorage<2, 50, ::BiomeIdType[5][5]>                               EXTREME_HILLS_IDS;
    ::ll::TypedStorage<8, 8, ::BaseGameVersion const&>                           mBaseGameVersion;
    ::ll::TypedStorage<8, 8, ::Experiments const&>                               mExperiments;
    ::ll::TypedStorage<8, 80, ::std::array<::std::array<::Biome const*, 5>, 2>>  OCEANS;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> MIDDLE_BIOMES;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> MIDDLE_BIOMES_VARIANT;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> PLATEAU_BIOMES;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> PLATEAU_BIOMES_VARIANT;
    ::ll::TypedStorage<8, 200, ::std::array<::std::array<::Biome const*, 5>, 5>> EXTREME_HILLS;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldBiomeBuilder& operator=(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _addHighSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCNAPI void _addLowSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCNAPI void _addMidSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCNAPI void _addPeaks(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCNAPI void _addSurfaceBiome(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   temperature,
        ::ClimateUtils::Parameter const&   humidity,
        ::ClimateUtils::Parameter const&   continentalness,
        ::ClimateUtils::Parameter const&   erosion,
        ::ClimateUtils::Parameter const&   weirdness,
        float                              offset,
        ::Biome const*                     second
    ) const;

    MCNAPI void _populateBiomeArrays(::BiomeRegistry const& biomeRegistry) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> EROSIONS();

    MCNAPI static ::ClimateUtils::Parameter const& FULL_RANGE();

    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> HUMIDITIES();

    MCNAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> TEMPERATURES();

    MCNAPI static ::ClimateUtils::Parameter const& coastContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& deepOceanContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& dripstoneCavesContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& dripstoneCavesHumidity();

    MCNAPI static ::ClimateUtils::Parameter const& farInlandContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& iceCavesContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& iceCavesHumidity();

    MCNAPI static ::ClimateUtils::Parameter const& iceCavesTemperature();

    MCNAPI static ::ClimateUtils::Parameter const& iceCavesWeirdness();

    MCNAPI static ::ClimateUtils::Parameter const& inlandContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& lushCavesHumidity();

    MCNAPI static ::ClimateUtils::Parameter const& midInlandContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& mushroomFieldsContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& nearInlandContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& oceanContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesContinentalness();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesErosion();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesHumidity();

    MCNAPI static ::ClimateUtils::Parameter const& sulfurCavesWeirdness();
    // NOLINTEND
};
