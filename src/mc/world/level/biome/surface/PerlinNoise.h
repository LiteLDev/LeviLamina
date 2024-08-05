#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerlinNoise {
public:
    // prevent constructor by default
    PerlinNoise& operator=(PerlinNoise const&);
    PerlinNoise();

public:
    // NOLINTBEGIN
    MCAPI PerlinNoise(class PerlinNoise const&);

    MCAPI PerlinNoise(class IRandom& random, int levels, int minLevel);

    MCAPI PerlinNoise(uint seed, int levels, int minLevel);

    MCAPI PerlinNoise(class IRandom& random, struct YBlendingBugSettings, int levels, int minLevel);

    MCAPI void
    getRegion(float* buffer, class Vec2 const& pos, int xSize, int zSize, class Vec2 const& scale, float pow) const;

    MCAPI void
    getRegion(float* buffer, class Vec3 const& pos, int xSize, int ySize, int zSize, class Vec3 const& scale) const;

    MCAPI float getValue(class Vec3 const& pos) const;

    MCAPI float getValueNormalized(class Vec3 const& pos) const;

    MCAPI ~PerlinNoise();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _init(class IRandom& random, struct YBlendingBugSettings);

    // NOLINTEND
};
