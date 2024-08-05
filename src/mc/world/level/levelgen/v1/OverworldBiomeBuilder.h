#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClimateUtils { struct Parameter; }
// clang-format on

class OverworldBiomeBuilder {
public:
    // prevent constructor by default
    OverworldBiomeBuilder& operator=(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder(OverworldBiomeBuilder const&);
    OverworldBiomeBuilder();

public:
    // NOLINTBEGIN
    MCAPI explicit OverworldBiomeBuilder(class BaseGameVersion const& baseGameVersion);

    MCAPI void addBiomes(std::vector<struct BiomeNoiseTarget>& biomes, class BiomeRegistry const& biomeRegistry) const;

    MCAPI ~OverworldBiomeBuilder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _addHighSlice(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    MCAPI void
    _addInlandBiomes(std::vector<struct BiomeNoiseTarget>& biomes, class BiomeRegistry const& biomeRegistry) const;

    MCAPI void _addLowSlice(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    MCAPI void _addMidSlice(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    MCAPI void _addPeaks(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    MCAPI void _addSurfaceBiome(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& temperature,
        struct ClimateUtils::Parameter const& humidity,
        struct ClimateUtils::Parameter const& continentalness,
        struct ClimateUtils::Parameter const& erosion,
        struct ClimateUtils::Parameter const& weirdness,
        float                                 offset,
        class Biome*                          second
    ) const;

    MCAPI void _addUndergroundBiome(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& temperature,
        struct ClimateUtils::Parameter const& humidity,
        struct ClimateUtils::Parameter const& continentalness,
        struct ClimateUtils::Parameter const& erosion,
        struct ClimateUtils::Parameter const& weirdness,
        float                                 offset,
        class Biome*                          second
    ) const;

    MCAPI void _addValleys(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    MCAPI class Biome* _pickBadlandsBiome(
        int                                   humidityIdx,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    MCAPI class Biome* _pickShatteredCoastBiome(
        int                                   temperatureIdx,
        int                                   humidityIdx,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    MCAPI void _populateBiomeArrays(class BiomeRegistry const& biomeRegistry) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static struct ClimateUtils::Parameter const EROSIONS[];

    MCAPI static struct ClimateUtils::Parameter const FULL_RANGE;

    MCAPI static struct ClimateUtils::Parameter const HUMIDITIES[];

    MCAPI static struct ClimateUtils::Parameter const TEMPERATURES[];

    MCAPI static struct ClimateUtils::Parameter const coastContinentalness;

    MCAPI static struct ClimateUtils::Parameter const deepOceanContinentalness;

    MCAPI static struct ClimateUtils::Parameter const dripstoneCavesContinentalness;

    MCAPI static struct ClimateUtils::Parameter const farInlandContinentalness;

    MCAPI static struct ClimateUtils::Parameter const inlandContinentalness;

    MCAPI static struct ClimateUtils::Parameter const lushCavesHumidity;

    MCAPI static struct ClimateUtils::Parameter const midInlandContinentalness;

    MCAPI static struct ClimateUtils::Parameter const mushroomFieldsContinentalness;

    MCAPI static struct ClimateUtils::Parameter const nearInlandContinentalness;

    MCAPI static struct ClimateUtils::Parameter const oceanContinentalness;

    // NOLINTEND
};
