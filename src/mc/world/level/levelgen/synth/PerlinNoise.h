#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/level/levelgen/synth/ImprovedNoise.h"

class PerlinNoise {
public:
    const int                  mLevels;              // this+0x0
    const int                  mMinLevel;            // this+0x4
    std::vector<ImprovedNoise> mNoiseLevels;         // this+0x8
    float                      mNormalizationFactor; // this+0x20

    // prevent constructor by default
    PerlinNoise& operator=(PerlinNoise const&);
    PerlinNoise();

public:
    // NOLINTBEGIN
    MCAPI PerlinNoise(class PerlinNoise const&);

    MCAPI PerlinNoise(class IRandom& random, int levels, int minLevel);

    MCAPI PerlinNoise(uint seed, int levels, int minLevel);

    MCAPI PerlinNoise(class IRandom& random, struct YBlendingBugSettings yBlendingSettings, int levels, int minLevel);

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
    MCAPI void _init(class IRandom& random, struct YBlendingBugSettings yBlendingSettings);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
