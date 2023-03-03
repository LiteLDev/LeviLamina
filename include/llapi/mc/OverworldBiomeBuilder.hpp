/**
 * @file  OverworldBiomeBuilder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "ClimateUtils.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class OverworldBiomeBuilder.
 *
 */
class OverworldBiomeBuilder {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDBIOMEBUILDER
public:
    class OverworldBiomeBuilder& operator=(class OverworldBiomeBuilder const &) = delete;
    OverworldBiomeBuilder(class OverworldBiomeBuilder const &) = delete;
    OverworldBiomeBuilder() = delete;
#endif

public:
    /**
     * @symbol  ??0OverworldBiomeBuilder\@\@QEAA\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI OverworldBiomeBuilder(class BaseGameVersion const &);
    /**
     * @symbol  ?addBiomes\@OverworldBiomeBuilder\@\@QEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void addBiomes(std::vector<struct BiomeNoiseTarget> &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?getWorldSpawnParameters\@OverworldBiomeBuilder\@\@QEBA?AV?$vector\@UClimateParameters\@\@V?$allocator\@UClimateParameters\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ClimateParameters> getWorldSpawnParameters() const;
    /**
     * @symbol  ??1OverworldBiomeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~OverworldBiomeBuilder();

//private:
    /**
     * @symbol  ?_addHighSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addHighSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?_addInlandBiomes\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addInlandBiomes(std::vector<struct BiomeNoiseTarget> &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?_addLowSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addLowSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?_addMidSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addMidSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?_addPeaks\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addPeaks(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?_addSurfaceBiome\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@1111MPEAVBiome\@\@\@Z
     */
    MCAPI void _addSurfaceBiome(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, float, class Biome *) const;
    /**
     * @symbol  ?_addUndergroundBiome\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@1111MPEAVBiome\@\@\@Z
     */
    MCAPI void _addUndergroundBiome(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, float, class Biome *) const;
    /**
     * @symbol  ?_addValleys\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addValleys(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?_pickBadlandsBiome\@OverworldBiomeBuilder\@\@AEBAPEAVBiome\@\@HAEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI class Biome * _pickBadlandsBiome(int, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?_pickShatteredCoastBiome\@OverworldBiomeBuilder\@\@AEBAPEAVBiome\@\@HHAEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI class Biome * _pickShatteredCoastBiome(int, int, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @symbol  ?_populateBiomeArrays\@OverworldBiomeBuilder\@\@AEBAXAEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _populateBiomeArrays(class BiomeRegistry const &) const;

private:
    /**
     * @symbol  ?EROSIONS\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const EROSIONS[];
    /**
     * @symbol  ?FULL_RANGE\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const FULL_RANGE;
    /**
     * @symbol  ?HUMIDITIES\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const HUMIDITIES[];
    /**
     * @symbol  ?TEMPERATURES\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const TEMPERATURES[];
    /**
     * @symbol  ?coastContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const coastContinentalness;
    /**
     * @symbol  ?deepOceanContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const deepOceanContinentalness;
    /**
     * @symbol  ?dripstoneCavesContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const dripstoneCavesContinentalness;
    /**
     * @symbol  ?farInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const farInlandContinentalness;
    /**
     * @symbol  ?inlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const inlandContinentalness;
    /**
     * @symbol  ?lushCavesHumidity\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const lushCavesHumidity;
    /**
     * @symbol  ?midInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const midInlandContinentalness;
    /**
     * @symbol  ?mushroomFieldsContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const mushroomFieldsContinentalness;
    /**
     * @symbol  ?nearInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const nearInlandContinentalness;
    /**
     * @symbol  ?oceanContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const oceanContinentalness;

};