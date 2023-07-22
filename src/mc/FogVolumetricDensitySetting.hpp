/**
 * @file  FogVolumetricDensitySetting.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure FogVolumetricDensitySetting.
 *
 */
struct FogVolumetricDensitySetting {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FOGVOLUMETRICDENSITYSETTING
public:
    struct FogVolumetricDensitySetting& operator=(struct FogVolumetricDensitySetting const &) = delete;
    FogVolumetricDensitySetting(struct FogVolumetricDensitySetting const &) = delete;
    FogVolumetricDensitySetting() = delete;
#endif

public:
    /**
     * @symbol  ?UNIFORM_MAX_DENSITY_HEIGHT\@FogVolumetricDensitySetting\@\@2MB
     */
    MCAPI static float const UNIFORM_MAX_DENSITY_HEIGHT;
    /**
     * @symbol  ?UNIFORM_ZERO_DENSITY_HEIGHT\@FogVolumetricDensitySetting\@\@2MB
     */
    MCAPI static float const UNIFORM_ZERO_DENSITY_HEIGHT;
    /**
     * @symbol  ?ZERO_SETTING\@FogVolumetricDensitySetting\@\@2U1\@B
     */
    MCAPI static struct FogVolumetricDensitySetting const ZERO_SETTING;

};