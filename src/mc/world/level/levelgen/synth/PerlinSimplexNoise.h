#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerlinSimplexNoise {
public:
    // prevent constructor by default
    PerlinSimplexNoise& operator=(PerlinSimplexNoise const&);
    PerlinSimplexNoise();

public:
    // NOLINTBEGIN
    MCAPI PerlinSimplexNoise(class PerlinSimplexNoise const&);

    MCAPI PerlinSimplexNoise(uint seed, int levels);

    MCAPI PerlinSimplexNoise(class IRandom& r, int levels, bool parityInitialization);

    MCAPI float* getRegion(
        float*            buffer,
        class Vec2 const& pos,
        int               xSize,
        int               ySize,
        class Vec2 const& scale,
        float             sizeScale,
        float             powScale
    ) const;

    MCAPI float getValue(class Vec3 const& pos) const;

    MCAPI float getValue(float x, float y) const;

    MCAPI float getValueNormalized(class Vec3 const& pos) const;

    MCAPI float getValueNormalized(float x, float y) const;

    MCAPI ~PerlinSimplexNoise();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _init(class IRandom& r, bool parityInitialization);

    // NOLINTEND
};
