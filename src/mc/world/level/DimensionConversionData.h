#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/math/Vec3.h"

class DimensionConversionData {
public:
    Vec3 mOverworldSpawnPoint;
    int  mNetherScale;

public:
    // NOLINTBEGIN
    MCAPI int getNetherScale() const;

    MCAPI class Vec3 const& getOverworldSpawnPoint() const;

    // NOLINTEND
};
