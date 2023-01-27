/**
 * @file  OverworldBiomeBuilder.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../ClimateUtils.hpp"

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
     * @hash   1131384982
     * @symbol  ??0OverworldBiomeBuilder\@\@QEAA\@AEBVBaseGameVersion\@\@\@Z
     */
    MCAPI OverworldBiomeBuilder(class BaseGameVersion const &);
    /**
     * @hash   1020100337
     * @symbol  ?addBiomes\@OverworldBiomeBuilder\@\@QEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void addBiomes(std::vector<struct BiomeNoiseTarget> &, class BiomeRegistry const &) const;
    /**
     * @hash   777321106
     * @symbol  ?getWorldSpawnParameters\@OverworldBiomeBuilder\@\@QEBA?AV?$vector\@UClimateParameters\@\@V?$allocator\@UClimateParameters\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct ClimateParameters> getWorldSpawnParameters() const;
    /**
     * @hash   1732894853
     * @symbol  ??1OverworldBiomeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~OverworldBiomeBuilder();

//private:
    /**
     * @hash   -1984156631
     * @symbol  ?_addHighSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addHighSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @hash   -1699962571
     * @symbol  ?_addInlandBiomes\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addInlandBiomes(std::vector<struct BiomeNoiseTarget> &, class BiomeRegistry const &) const;
    /**
     * @hash   -317912441
     * @symbol  ?_addLowSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addLowSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @hash   -1458200357
     * @symbol  ?_addMidSlice\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addMidSlice(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @hash   -1742024107
     * @symbol  ?_addPeaks\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addPeaks(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @hash   1778694126
     * @symbol  ?_addSurfaceBiome\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@1111MPEAVBiome\@\@\@Z
     */
    MCAPI void _addSurfaceBiome(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, float, class Biome *) const;
    /**
     * @hash   -1409841012
     * @symbol  ?_addUndergroundBiome\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@1111MPEAVBiome\@\@\@Z
     */
    MCAPI void _addUndergroundBiome(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, struct ClimateUtils::Parameter const &, float, class Biome *) const;
    /**
     * @hash   2032934773
     * @symbol  ?_addValleys\@OverworldBiomeBuilder\@\@AEBAXAEAV?$vector\@UBiomeNoiseTarget\@\@V?$allocator\@UBiomeNoiseTarget\@\@\@std\@\@\@std\@\@AEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _addValleys(std::vector<struct BiomeNoiseTarget> &, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @hash   723485533
     * @symbol  ?_pickBadlandsBiome\@OverworldBiomeBuilder\@\@AEBAPEAVBiome\@\@HAEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI class Biome * _pickBadlandsBiome(int, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @hash   -1849790913
     * @symbol  ?_pickShatteredCoastBiome\@OverworldBiomeBuilder\@\@AEBAPEAVBiome\@\@HHAEBUParameter\@ClimateUtils\@\@AEBVBiomeRegistry\@\@\@Z
     */
    MCAPI class Biome * _pickShatteredCoastBiome(int, int, struct ClimateUtils::Parameter const &, class BiomeRegistry const &) const;
    /**
     * @hash   1323195751
     * @symbol  ?_populateBiomeArrays\@OverworldBiomeBuilder\@\@AEBAXAEBVBiomeRegistry\@\@\@Z
     */
    MCAPI void _populateBiomeArrays(class BiomeRegistry const &) const;

private:
    /**
     * @hash   1641744318
     * @symbol  ?EROSIONS\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const EROSIONS[];
    /**
     * @hash   -1367004706
     * @symbol  ?FULL_RANGE\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const FULL_RANGE;
    /**
     * @hash   1416267107
     * @symbol  ?HUMIDITIES\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const HUMIDITIES[];
    /**
     * @hash   -771810879
     * @symbol  ?TEMPERATURES\@OverworldBiomeBuilder\@\@0QBUParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const TEMPERATURES[];
    /**
     * @hash   -348696031
     * @symbol  ?coastContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const coastContinentalness;
    /**
     * @hash   -1259321563
     * @symbol  ?deepOceanContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const deepOceanContinentalness;
    /**
     * @hash   -1415021647
     * @symbol  ?dripstoneCavesContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const dripstoneCavesContinentalness;
    /**
     * @hash   1532334320
     * @symbol  ?farInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const farInlandContinentalness;
    /**
     * @hash   -1516829449
     * @symbol  ?inlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const inlandContinentalness;
    /**
     * @hash   2147201916
     * @symbol  ?lushCavesHumidity\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const lushCavesHumidity;
    /**
     * @hash   -163788561
     * @symbol  ?midInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const midInlandContinentalness;
    /**
     * @hash   -1405304170
     * @symbol  ?mushroomFieldsContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const mushroomFieldsContinentalness;
    /**
     * @hash   1466019519
     * @symbol  ?nearInlandContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const nearInlandContinentalness;
    /**
     * @hash   1538279337
     * @symbol  ?oceanContinentalness\@OverworldBiomeBuilder\@\@0UParameter\@ClimateUtils\@\@B
     */
    MCAPI static struct ClimateUtils::Parameter const oceanContinentalness;

};