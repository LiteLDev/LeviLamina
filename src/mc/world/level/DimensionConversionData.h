#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"

class DimensionConversionData {
public:
    Vec3 mOverworldSpawnPoint;
    int  mNetherScale;

public:
    // NOLINTBEGIN
    // symbol: ?getNetherScale@DimensionConversionData@@QEBAHXZ
    MCAPI int getNetherScale() const;

    // symbol: ?getOverworldSpawnPoint@DimensionConversionData@@QEBAAEBVVec3@@XZ
    MCAPI class Vec3 const& getOverworldSpawnPoint() const;

    // NOLINTEND
};
