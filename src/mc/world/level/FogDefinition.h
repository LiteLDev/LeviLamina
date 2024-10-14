#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct FogDefinition {
public:
    // prevent constructor by default
    FogDefinition& operator=(FogDefinition const&);
    FogDefinition(FogDefinition const&);
    FogDefinition();

public:
    // NOLINTBEGIN
    MCAPI static bool isValidIdentifier(std::string const& format);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static struct FogDistanceSetting const& DEFAULT_DISTANCE_AIR_SETTING();

    MCAPI static struct FogDistanceSetting const& DEFAULT_DISTANCE_LAVA_RESISTANCE_SETTING();

    MCAPI static struct FogDistanceSetting const& DEFAULT_DISTANCE_LAVA_SETTING();

    MCAPI static struct FogDistanceSetting const& DEFAULT_DISTANCE_NETHER_AIR_SETTING();

    MCAPI static struct FogDistanceSetting const& DEFAULT_DISTANCE_POWDER_SNOW_SETTING();

    MCAPI static struct FogDistanceSetting const& DEFAULT_DISTANCE_WATER_SETTING();

    MCAPI static struct FogDistanceSetting const& DEFAULT_DISTANCE_WEATHER_SETTING();

    MCAPI static struct FogSetting const& DEFAULT_FOG_AIR_SETTING();

    MCAPI static struct FogDefinition const& DEFAULT_FOG_DEFINITION();

    MCAPI static struct FogSetting const& DEFAULT_FOG_LAVA_RESISTANCE_SETTING();

    MCAPI static struct FogSetting const& DEFAULT_FOG_LAVA_SETTING();

    MCAPI static struct FogSetting const& DEFAULT_FOG_NETHER_AIR_SETTING();

    MCAPI static struct FogSetting const& DEFAULT_FOG_POWDER_SNOW_SETTING();

    MCAPI static struct FogSetting const& DEFAULT_FOG_WATER_SETTING();

    MCAPI static struct FogSetting const& DEFAULT_FOG_WEATHER_SETTING();

    MCAPI static struct FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_AIR_SETTING();

    MCAPI static struct FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_CLOUD_SETTING();

    MCAPI static struct FogVolumetricCoefficientSetting const& DEFAULT_VOLUME_COEFFICIENT_WATER_SETTING();

    MCAPI static struct FogDefinition const& DEFERRED_DEFAULT_FOG_DEFINITION();

    MCAPI static struct FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_AIR_SETTING();

    MCAPI static struct FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_WATER_SETTING();

    MCAPI static struct FogVolumetricDensitySetting const& DEFERRED_DEFAULT_VOLUME_DENSITY_WEATHER_SETTING();

    // NOLINTEND
};
