/**
 * @file  FogDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   856865603
     * @symbol  ?DEFAULT_DISTANCE_AIR_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_AIR_SETTING;
    /**
     * @hash   1197319167
     * @symbol  ?DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING;
    /**
     * @hash   807780673
     * @symbol  ?DEFAULT_DISTANCE_LAVA_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_LAVA_SETTING;
    /**
     * @hash   -648040601
     * @symbol  ?DEFAULT_DISTANCE_NETHER_AIR_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_NETHER_AIR_SETTING;
    /**
     * @hash   -715458367
     * @symbol  ?DEFAULT_DISTANCE_POWDER_SNOW_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_POWDER_SNOW_SETTING;
    /**
     * @hash   867544061
     * @symbol  ?DEFAULT_DISTANCE_WATER_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_WATER_SETTING;
    /**
     * @hash   -2064448937
     * @symbol  ?DEFAULT_DISTANCE_WEATHER_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_WEATHER_SETTING;
    /**
     * @hash   2052289767
     * @symbol  ?DEFAULT_FOG_AIR_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_AIR_SETTING;
    /**
     * @hash   -569317451
     * @symbol  ?DEFAULT_FOG_DEFINITION\@FogDefinition\@\@2U1\@B
     */
    MCAPI static struct FogDefinition const DEFAULT_FOG_DEFINITION;
    /**
     * @hash   1506932371
     * @symbol  ?DEFAULT_FOG_LAVA_RESISTANCE_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_LAVA_RESISTANCE_SETTING;
    /**
     * @hash   475340589
     * @symbol  ?DEFAULT_FOG_LAVA_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_LAVA_SETTING;
    /**
     * @hash   1463587011
     * @symbol  ?DEFAULT_FOG_NETHER_AIR_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_NETHER_AIR_SETTING;
    /**
     * @hash   814923397
     * @symbol  ?DEFAULT_FOG_POWDER_SNOW_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_POWDER_SNOW_SETTING;
    /**
     * @hash   1824608305
     * @symbol  ?DEFAULT_FOG_WATER_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_WATER_SETTING;
    /**
     * @hash   -1994485669
     * @symbol  ?DEFAULT_FOG_WEATHER_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_WEATHER_SETTING;
    /**
     * @hash   -581416955
     * @symbol  ?DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING;
    /**
     * @hash   869112677
     * @symbol  ?DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING;
    /**
     * @hash   -851956859
     * @symbol  ?DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING;
    /**
     * @hash   -281121841
     * @symbol  ?isValidIdentifier\@FogDefinition\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isValidIdentifier(std::string const &);

};