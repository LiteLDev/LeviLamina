#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DimensionConversionData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DIMENSIONCONVERSIONDATA
public:
    DimensionConversionData& operator=(DimensionConversionData const&) = delete;
    DimensionConversionData(DimensionConversionData const&)            = delete;
    DimensionConversionData()                                          = delete;
#endif

public:
    /**
     * @symbol ?getNetherScale\@DimensionConversionData\@\@QEBAHXZ
     */
    MCAPI int getNetherScale() const;
    /**
     * @symbol ?getOverworldSpawnPoint\@DimensionConversionData\@\@QEBAAEBVVec3\@\@XZ
     */
    MCAPI class Vec3 const& getOverworldSpawnPoint() const;
};
