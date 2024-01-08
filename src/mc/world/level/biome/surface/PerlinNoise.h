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
    // symbol: ??0PerlinNoise@@QEAA@AEBV0@@Z
    MCAPI PerlinNoise(class PerlinNoise const&);

    // symbol: ??0PerlinNoise@@QEAA@AEAVIRandom@@HH@Z
    MCAPI PerlinNoise(class IRandom& random, int levels, int minLevel);

    // symbol: ??0PerlinNoise@@QEAA@IHH@Z
    MCAPI PerlinNoise(uint seed, int levels, int minLevel);

    // symbol: ??0PerlinNoise@@QEAA@AEAVIRandom@@UYBlendingBugSettings@@HH@Z
    MCAPI PerlinNoise(class IRandom& random, struct YBlendingBugSettings, int levels, int minLevel);

    // symbol: ?getRegion@PerlinNoise@@QEBAXPEAMAEBVVec2@@HH1M@Z
    MCAPI void
    getRegion(float* buffer, class Vec2 const& pos, int xSize, int zSize, class Vec2 const& scale, float pow) const;

    // symbol: ?getRegion@PerlinNoise@@QEBAXPEAMAEBVVec3@@HHH1@Z
    MCAPI void
    getRegion(float* buffer, class Vec3 const& pos, int xSize, int ySize, int zSize, class Vec3 const& scale) const;

    // symbol: ?getValue@PerlinNoise@@QEBAMAEBVVec3@@@Z
    MCAPI float getValue(class Vec3 const& pos) const;

    // symbol: ?getValueNormalized@PerlinNoise@@QEBAMAEBVVec3@@@Z
    MCAPI float getValueNormalized(class Vec3 const& pos) const;

    // symbol: ??1PerlinNoise@@QEAA@XZ
    MCAPI ~PerlinNoise();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_init@PerlinNoise@@AEAAXAEAVIRandom@@UYBlendingBugSettings@@@Z
    MCAPI void _init(class IRandom& random, struct YBlendingBugSettings);

    // NOLINTEND
};
