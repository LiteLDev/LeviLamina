#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/BiomeIdType.h"
#include "mc/world/level/biome/climate_utils/Parameter.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Biome;
class Experiments;
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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> EROSIONS();

    MCAPI static ::ClimateUtils::Parameter const& FULL_RANGE();

    MCAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> HUMIDITIES();

    MCAPI static ::std::add_lvalue_reference_t<::ClimateUtils::Parameter const[]> TEMPERATURES();

    MCAPI static ::ClimateUtils::Parameter const& coastContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& deepOceanContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& dripstoneCavesContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& farInlandContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& inlandContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& lushCavesHumidity();

    MCAPI static ::ClimateUtils::Parameter const& midInlandContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& mushroomFieldsContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& nearInlandContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& oceanContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& sulfurCavesContinentalness();

    MCAPI static ::ClimateUtils::Parameter const& sulfurCavesErosion();

    MCAPI static ::ClimateUtils::Parameter const& sulfurCavesWeirdness();
    // NOLINTEND
};
