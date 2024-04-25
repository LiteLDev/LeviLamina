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
    // symbol: ??0OverworldBiomeBuilder@@QEAA@AEBVBaseGameVersion@@@Z
    MCAPI explicit OverworldBiomeBuilder(class BaseGameVersion const& baseGameVersion);

    // symbol:
    // ?addBiomes@OverworldBiomeBuilder@@QEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBVBiomeRegistry@@@Z
    MCAPI void addBiomes(std::vector<struct BiomeNoiseTarget>& biomes, class BiomeRegistry const& biomeRegistry) const;

    // symbol: ??1OverworldBiomeBuilder@@QEAA@XZ
    MCAPI ~OverworldBiomeBuilder();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_addHighSlice@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@AEBVBiomeRegistry@@@Z
    MCAPI void _addHighSlice(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    // symbol:
    // ?_addInlandBiomes@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBVBiomeRegistry@@@Z
    MCAPI void
    _addInlandBiomes(std::vector<struct BiomeNoiseTarget>& biomes, class BiomeRegistry const& biomeRegistry) const;

    // symbol:
    // ?_addLowSlice@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@AEBVBiomeRegistry@@@Z
    MCAPI void _addLowSlice(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    // symbol:
    // ?_addMidSlice@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@AEBVBiomeRegistry@@@Z
    MCAPI void _addMidSlice(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    // symbol:
    // ?_addPeaks@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@AEBVBiomeRegistry@@@Z
    MCAPI void _addPeaks(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    // symbol:
    // ?_addSurfaceBiome@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@1111MPEAVBiome@@@Z
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

    // symbol:
    // ?_addUndergroundBiome@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@1111MPEAVBiome@@@Z
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

    // symbol:
    // ?_addValleys@OverworldBiomeBuilder@@AEBAXAEAV?$vector@UBiomeNoiseTarget@@V?$allocator@UBiomeNoiseTarget@@@std@@@std@@AEBUParameter@ClimateUtils@@AEBVBiomeRegistry@@@Z
    MCAPI void _addValleys(
        std::vector<struct BiomeNoiseTarget>& biomes,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    // symbol:
    // ?_pickBadlandsBiome@OverworldBiomeBuilder@@AEBAPEAVBiome@@HAEBUParameter@ClimateUtils@@AEBVBiomeRegistry@@@Z
    MCAPI class Biome* _pickBadlandsBiome(
        int                                   humidityIndex,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    // symbol:
    // ?_pickShatteredCoastBiome@OverworldBiomeBuilder@@AEBAPEAVBiome@@HHAEBUParameter@ClimateUtils@@AEBVBiomeRegistry@@@Z
    MCAPI class Biome* _pickShatteredCoastBiome(
        int                                   temperatureIndex,
        int                                   humidityIndex,
        struct ClimateUtils::Parameter const& weirdness,
        class BiomeRegistry const&            biomeRegistry
    ) const;

    // symbol: ?_populateBiomeArrays@OverworldBiomeBuilder@@AEBAXAEBVBiomeRegistry@@@Z
    MCAPI void _populateBiomeArrays(class BiomeRegistry const& biomeRegistry) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?EROSIONS@OverworldBiomeBuilder@@0QBUParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const EROSIONS[];

    // symbol: ?FULL_RANGE@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const FULL_RANGE;

    // symbol: ?HUMIDITIES@OverworldBiomeBuilder@@0QBUParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const HUMIDITIES[];

    // symbol: ?TEMPERATURES@OverworldBiomeBuilder@@0QBUParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const TEMPERATURES[];

    // symbol: ?coastContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const coastContinentalness;

    // symbol: ?deepOceanContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const deepOceanContinentalness;

    // symbol: ?dripstoneCavesContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const dripstoneCavesContinentalness;

    // symbol: ?farInlandContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const farInlandContinentalness;

    // symbol: ?inlandContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const inlandContinentalness;

    // symbol: ?lushCavesHumidity@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const lushCavesHumidity;

    // symbol: ?midInlandContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const midInlandContinentalness;

    // symbol: ?mushroomFieldsContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const mushroomFieldsContinentalness;

    // symbol: ?nearInlandContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const nearInlandContinentalness;

    // symbol: ?oceanContinentalness@OverworldBiomeBuilder@@0UParameter@ClimateUtils@@B
    MCAPI static struct ClimateUtils::Parameter const oceanContinentalness;

    // NOLINTEND
};
