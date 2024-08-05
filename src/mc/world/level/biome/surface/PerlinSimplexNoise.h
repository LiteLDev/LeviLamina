#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/synth/SimplexNoise.h"

class PerlinSimplexNoise {
public:
    int                       mLevels;              // this+0x0
    std::vector<SimplexNoise> mNoiseLevels;         // this+0x8
    float                     mNormalizationFactor; // this+0x20

    // prevent constructor by default
    PerlinSimplexNoise& operator=(PerlinSimplexNoise const&);
    PerlinSimplexNoise();

public:
    // NOLINTBEGIN
    MCAPI PerlinSimplexNoise(class PerlinSimplexNoise const&);

    MCAPI PerlinSimplexNoise(uint seed, int levels);

    MCAPI PerlinSimplexNoise(class IRandom& r, int levels, bool);

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
    MCAPI void _init(class IRandom& r, bool);

    // NOLINTEND
};
