#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ClimateUtils { struct Parameter; }
// clang-format on

class OverworldBiomeBuilder {

public:
    // prevent constructor by default
    OverworldBiomeBuilder& operator=(OverworldBiomeBuilder const&) = delete;
    OverworldBiomeBuilder(OverworldBiomeBuilder const&)            = delete;
    OverworldBiomeBuilder()                                        = delete;

public:
    /**
     * @symbol ??0OverworldBiomeBuilder\@\@QEAA\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI OverworldBiomeBuilder(class BaseGameVersion const&); // NOLINT
    /**
     * @symbol
     * ?addBiomes\@OverworldBiomeBuilder\@\@QEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void addBiomes(std::vector<struct BiomeNoiseTarget>&, class BiomeRegistry const&) const; // NOLINT
    /**
     * @symbol ??1OverworldBiomeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~OverworldBiomeBuilder(); // NOLINT

    // private:
    /**
     * @symbol
     * ?_addHighSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void
    _addHighSlice(std::vector<struct BiomeNoiseTarget>&, struct ClimateUtils::Parameter const&, class BiomeRegistry const&)
        const; // NOLINT
    /**
     * @symbol
     * ?_addInlandBiomes\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addInlandBiomes(std::vector<struct BiomeNoiseTarget>&, class BiomeRegistry const&) const; // NOLINT
    /**
     * @symbol
     * ?_addLowSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void
    _addLowSlice(std::vector<struct BiomeNoiseTarget>&, struct ClimateUtils::Parameter const&, class BiomeRegistry const&)
        const; // NOLINT
    /**
     * @symbol
     * ?_addMidSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void
    _addMidSlice(std::vector<struct BiomeNoiseTarget>&, struct ClimateUtils::Parameter const&, class BiomeRegistry const&)
        const; // NOLINT
    /**
     * @symbol
     * ?_addPeaks\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void
    _addPeaks(std::vector<struct BiomeNoiseTarget>&, struct ClimateUtils::Parameter const&, class BiomeRegistry const&)
        const; // NOLINT
    /**
     * @symbol
     * ?_addSurfaceBiome\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@1111MPEAVBiome\@\@\@Z
     */
    MCAPI void
    _addSurfaceBiome(std::vector<struct BiomeNoiseTarget>&, struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&, float, class Biome*)
        const; // NOLINT
    /**
     * @symbol
     * ?_addUndergroundBiome\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@1111MPEAVBiome\@\@\@Z
     */
    MCAPI void
    _addUndergroundBiome(std::vector<struct BiomeNoiseTarget>&, struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&, struct ClimateUtils::Parameter const&, float, class Biome*)
        const; // NOLINT
    /**
     * @symbol
     * ?_addValleys\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void
    _addValleys(std::vector<struct BiomeNoiseTarget>&, struct ClimateUtils::Parameter const&, class BiomeRegistry const&)
        const; // NOLINT
    /**
     * @symbol
     * ?_pickBadlandsBiome\@OverworldBiomeBuilder\@\@AEBAPEAVBiome\@\@HAEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI class Biome*
    _pickBadlandsBiome(int, struct ClimateUtils::Parameter const&, class BiomeRegistry const&) const; // NOLINT
    /**
     * @symbol
     * ?_pickShatteredCoastBiome\@OverworldBiomeBuilder\@\@AEBAPEAVBiome\@\@HHAEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI class Biome*
    _pickShatteredCoastBiome(int, int, struct ClimateUtils::Parameter const&, class BiomeRegistry const&)
        const; // NOLINT
    /**
     * @symbol ?_populateBiomeArrays\@OverworldBiomeBuilder\@\@AEBAXAEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _populateBiomeArrays(class BiomeRegistry const&) const; // NOLINT

private:
    /**
     * @symbol ?EROSIONS\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const EROSIONS[]; // NOLINT
    /**
     * @symbol ?FULL_RANGE\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const FULL_RANGE; // NOLINT
    /**
     * @symbol ?HUMIDITIES\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const HUMIDITIES[]; // NOLINT
    /**
     * @symbol ?TEMPERATURES\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const TEMPERATURES[]; // NOLINT
    /**
     * @symbol ?coastContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const coastContinentalness; // NOLINT
    /**
     * @symbol ?deepOceanContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const deepOceanContinentalness; // NOLINT
    /**
     * @symbol ?dripstoneCavesContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const dripstoneCavesContinentalness; // NOLINT
    /**
     * @symbol ?farInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const farInlandContinentalness; // NOLINT
    /**
     * @symbol ?inlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const inlandContinentalness; // NOLINT
    /**
     * @symbol ?lushCavesHumidity\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const lushCavesHumidity; // NOLINT
    /**
     * @symbol ?midInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const midInlandContinentalness; // NOLINT
    /**
     * @symbol ?mushroomFieldsContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const mushroomFieldsContinentalness; // NOLINT
    /**
     * @symbol ?nearInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const nearInlandContinentalness; // NOLINT
    /**
     * @symbol ?oceanContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const oceanContinentalness; // NOLINT
};
