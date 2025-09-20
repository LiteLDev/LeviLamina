#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class Biome;
class BiomeRegistry;
class Experiments;
struct BiomeNoiseTarget;
namespace ClimateUtils { struct Parameter; }
// clang-format on

class OverworldBiomeBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkff988f;
    ::ll::UntypedStorage<8, 16>  mUnk5965fc;
    ::ll::UntypedStorage<2, 20>  mUnka4ebfa;
    ::ll::UntypedStorage<2, 50>  mUnk9571a8;
    ::ll::UntypedStorage<2, 50>  mUnk951c9f;
    ::ll::UntypedStorage<2, 50>  mUnke6d370;
    ::ll::UntypedStorage<2, 50>  mUnk814ba2;
    ::ll::UntypedStorage<2, 50>  mUnkfe9916;
    ::ll::UntypedStorage<2, 50>  mUnkde00e0;
    ::ll::UntypedStorage<2, 50>  mUnk7ff101;
    ::ll::UntypedStorage<8, 8>   mUnk4829fa;
    ::ll::UntypedStorage<8, 8>   mUnkf351ee;
    ::ll::UntypedStorage<8, 80>  mUnkdeb30a;
    ::ll::UntypedStorage<8, 200> mUnk61c267;
    ::ll::UntypedStorage<8, 200> mUnkf28518;
    ::ll::UntypedStorage<8, 200> mUnk479b27;
    ::ll::UntypedStorage<8, 200> mUnk86c069;
    ::ll::UntypedStorage<8, 200> mUnkf0c738;
    // NOLINTEND

public:
    // prevent constructor by default
    OverworldBiomeBuilder& operator=(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OverworldBiomeBuilder(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);

    MCAPI void _addHighSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCAPI void _addInlandBiomes(::std::vector<::BiomeNoiseTarget>& biomes, ::BiomeRegistry const& biomeRegistry) const;

    MCAPI void _addLowSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCAPI void _addMidSlice(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCAPI void _addPeaks(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCAPI void _addSurfaceBiome(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   temperature,
        ::ClimateUtils::Parameter const&   humidity,
        ::ClimateUtils::Parameter const&   continentalness,
        ::ClimateUtils::Parameter const&   erosion,
        ::ClimateUtils::Parameter const&   weirdness,
        float                              offset,
        ::Biome const*                     second
    ) const;

    MCAPI void _addUndergroundBiome(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   temperature,
        ::ClimateUtils::Parameter const&   humidity,
        ::ClimateUtils::Parameter const&   continentalness,
        ::ClimateUtils::Parameter const&   erosion,
        ::ClimateUtils::Parameter const&   weirdness,
        float                              offset,
        ::Biome const*                     second
    ) const;

    MCAPI void
    _addUndergroundBiomes(::std::vector<::BiomeNoiseTarget>& biomes, ::BiomeRegistry const& biomeRegistry) const;

    MCAPI void _addValleys(
        ::std::vector<::BiomeNoiseTarget>& biomes,
        ::ClimateUtils::Parameter const&   weirdness,
        ::BiomeRegistry const&             biomeRegistry
    ) const;

    MCAPI ::Biome const* _pickBadlandsBiome(
        int                              humidityIndex,
        ::ClimateUtils::Parameter const& weirdness,
        ::BiomeRegistry const&           biomeRegistry
    ) const;

    MCAPI ::Biome const* _pickBeachBiome(int temperatureIndex, ::BiomeRegistry const& biomeRegistry) const;

    MCAPI ::Biome const* _pickPeakBiome(
        int                              temperatureIndex,
        int                              humidityIndex,
        ::ClimateUtils::Parameter const& weirdness,
        ::BiomeRegistry const&           biomeRegistry
    ) const;

    MCAPI ::Biome const* _pickSlopeBiome(
        int                              temperatureIndex,
        int                              humidityIndex,
        ::ClimateUtils::Parameter const& weirdness,
        ::BiomeRegistry const&           biomeRegistry
    ) const;

    MCAPI void _populateBiomeArrays(::BiomeRegistry const& biomeRegistry) const;
    // NOLINTEND

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
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::BaseGameVersion const& baseGameVersion, ::Experiments const& experiments);
    // NOLINTEND
};
