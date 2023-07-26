/**
 * @file  FogDefinition.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?DEFAULT_DISTANCE_AIR_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_AIR_SETTING;
    /**
     * @symbol  ?DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING;
    /**
     * @symbol  ?DEFAULT_DISTANCE_LAVA_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_LAVA_SETTING;
    /**
     * @symbol  ?DEFAULT_DISTANCE_NETHER_AIR_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_NETHER_AIR_SETTING;
    /**
     * @symbol  ?DEFAULT_DISTANCE_POWDER_SNOW_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_POWDER_SNOW_SETTING;
    /**
     * @symbol  ?DEFAULT_DISTANCE_WATER_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_WATER_SETTING;
    /**
     * @symbol  ?DEFAULT_DISTANCE_WEATHER_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_WEATHER_SETTING;
    /**
     * @symbol  ?DEFAULT_FOG_AIR_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_AIR_SETTING;
    /**
     * @symbol  ?DEFAULT_FOG_DEFINITION\@FogDefinition\@\@2U1\@B
     */
    MCAPI static struct FogDefinition const DEFAULT_FOG_DEFINITION;
    /**
     * @symbol  ?DEFAULT_FOG_LAVA_RESISTANCE_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_LAVA_RESISTANCE_SETTING;
    /**
     * @symbol  ?DEFAULT_FOG_LAVA_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_LAVA_SETTING;
    /**
     * @symbol  ?DEFAULT_FOG_NETHER_AIR_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_NETHER_AIR_SETTING;
    /**
     * @symbol  ?DEFAULT_FOG_POWDER_SNOW_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_POWDER_SNOW_SETTING;
    /**
     * @symbol  ?DEFAULT_FOG_WATER_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_WATER_SETTING;
    /**
     * @symbol  ?DEFAULT_FOG_WEATHER_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_WEATHER_SETTING;
    /**
     * @symbol  ?DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING;
    /**
     * @symbol  ?DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING;
    /**
     * @symbol  ?DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING;
    /**
     * @symbol  ?isValidIdentifier\@FogDefinition\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isValidIdentifier(std::string const &);

};