#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogDefinition {

public:
    // prevent constructor by default
    FogDefinition& operator=(FogDefinition const&) = delete;
    FogDefinition(FogDefinition const&)            = delete;
    FogDefinition()                                = delete;

public:
    /**
     * @symbol
     * ?isValidIdentifier\@FogDefinition\@\@SA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static bool isValidIdentifier(std::string const&); // NOLINT
    /**
     * @symbol ?DEFAULT_DISTANCE_AIR_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_AIR_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_DISTANCE_LAVA_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_LAVA_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_DISTANCE_NETHER_AIR_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_NETHER_AIR_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_DISTANCE_POWDER_SNOW_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_POWDER_SNOW_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_DISTANCE_WATER_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_WATER_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_DISTANCE_WEATHER_SETTING\@FogDefinition\@\@2UFogDistanceSetting\@\@B
     */
    MCAPI static struct FogDistanceSetting const DEFAULT_DISTANCE_WEATHER_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_FOG_AIR_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_AIR_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_FOG_DEFINITION\@FogDefinition\@\@2U1\@B
     */
    MCAPI static struct FogDefinition const DEFAULT_FOG_DEFINITION; // NOLINT
    /**
     * @symbol ?DEFAULT_FOG_LAVA_RESISTANCE_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_LAVA_RESISTANCE_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_FOG_LAVA_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_LAVA_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_FOG_NETHER_AIR_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_NETHER_AIR_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_FOG_POWDER_SNOW_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_POWDER_SNOW_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_FOG_WATER_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_WATER_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_FOG_WEATHER_SETTING\@FogDefinition\@\@2UFogSetting\@\@B
     */
    MCAPI static struct FogSetting const DEFAULT_FOG_WEATHER_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING; // NOLINT
    /**
     * @symbol ?DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING\@FogDefinition\@\@2UFogVolumetricCoefficientSetting\@\@B
     */
    MCAPI static struct FogVolumetricCoefficientSetting const DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING; // NOLINT
};
