/**
 * @file  MC/FogDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure FogDefinition.
 *
 */
struct FogDefinition {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGDEFINITION
public:
    struct FogDefinition& operator=(struct FogDefinition const &) = delete;
    FogDefinition(struct FogDefinition const &) = delete;
    FogDefinition() = delete;
#endif

public:
    /**
     * @hash   -229664061
     * @symbol ?DEFAULT_DISTANCE_AIR_SETTING@FogDefinition@@2UFogDistanceSetting@@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_AIR_SETTING;
    /**
     * @hash   110789503
     * @symbol ?DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING@FogDefinition@@2UFogDistanceSetting@@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING;
    /**
     * @hash   -278748991
     * @symbol ?DEFAULT_DISTANCE_LAVA_SETTING@FogDefinition@@2UFogDistanceSetting@@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_LAVA_SETTING;
    /**
     * @hash   -1734570265
     * @symbol ?DEFAULT_DISTANCE_NETHER_AIR_SETTING@FogDefinition@@2UFogDistanceSetting@@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_NETHER_AIR_SETTING;
    /**
     * @hash   -1801988031
     * @symbol ?DEFAULT_DISTANCE_POWDER_SNOW_SETTING@FogDefinition@@2UFogDistanceSetting@@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_POWDER_SNOW_SETTING;
    /**
     * @hash   -218985603
     * @symbol ?DEFAULT_DISTANCE_WATER_SETTING@FogDefinition@@2UFogDistanceSetting@@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_WATER_SETTING;
    /**
     * @hash   1143988695
     * @symbol ?DEFAULT_DISTANCE_WEATHER_SETTING@FogDefinition@@2UFogDistanceSetting@@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_WEATHER_SETTING;
    /**
     * @hash   1157821719
     * @symbol ?DEFAULT_FOG_AIR_SETTING@FogDefinition@@2UFogSetting@@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_AIR_SETTING;
    /**
     * @hash   -1463785499
     * @symbol ?DEFAULT_FOG_DEFINITION@FogDefinition@@2U1@B
     */
    MCAPI static struct FogDefinition const DEFAULT_FOG_DEFINITION;
    /**
     * @hash   612464323
     * @symbol ?DEFAULT_FOG_LAVA_RESISTANCE_SETTING@FogDefinition@@2UFogSetting@@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_LAVA_RESISTANCE_SETTING;
    /**
     * @hash   -419127459
     * @symbol ?DEFAULT_FOG_LAVA_SETTING@FogDefinition@@2UFogSetting@@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_LAVA_SETTING;
    /**
     * @hash   569118963
     * @symbol ?DEFAULT_FOG_NETHER_AIR_SETTING@FogDefinition@@2UFogSetting@@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_NETHER_AIR_SETTING;
    /**
     * @hash   -79544651
     * @symbol ?DEFAULT_FOG_POWDER_SNOW_SETTING@FogDefinition@@2UFogSetting@@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_POWDER_SNOW_SETTING;
    /**
     * @hash   930140257
     * @symbol ?DEFAULT_FOG_WATER_SETTING@FogDefinition@@2UFogSetting@@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_WATER_SETTING;
    /**
     * @hash   1406013579
     * @symbol ?DEFAULT_FOG_WEATHER_SETTING@FogDefinition@@2UFogSetting@@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_WEATHER_SETTING;
    /**
     * @hash   -1475885003
     * @symbol ?DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING@FogDefinition@@2UFogVolumetricCoefficientSetting@@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING;
    /**
     * @hash   -25355371
     * @symbol ?DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING@FogDefinition@@2UFogVolumetricCoefficientSetting@@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING;
    /**
     * @hash   -1746424907
     * @symbol ?DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING@FogDefinition@@2UFogVolumetricCoefficientSetting@@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING;
    /**
     * @hash   -1135566161
     * @symbol ?isValidIdentifier@FogDefinition@@SA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static bool isValidIdentifier(std::string const &);

};