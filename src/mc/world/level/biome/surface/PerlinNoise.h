#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerlinNoise {
public:
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
    MCAPI PerlinNoise(class IRandom&, struct YBlendingBugSettings, int, int);

    // symbol: ?getRegion@PerlinNoise@@QEBAXPEAMAEBVVec2@@HH1M@Z
    MCAPI void
    getRegion(float* buffer, class Vec2 const& pos, int xSize, int zSize, class Vec2 const& scale, float pow) const;

    // symbol: ?getRegion@PerlinNoise@@QEBAXPEAMAEBVVec3@@HHH1@Z
    MCAPI void
    getRegion(float* buffer, class Vec3 const& pos, int xSize, int ySize, int zSize, class Vec3 const& scale) const;

    // symbol: ?getValue@PerlinNoise@@QEBAMAEBVVec3@@@Z
    MCAPI float getValue(class Vec3 const& pos) const;

    // symbol: ?getValueNormalized@PerlinNoise@@QEBAMAEBVVec3@@@Z
    MCAPI float getValueNormalized(class Vec3 const&) const;

    // symbol: ??1PerlinNoise@@QEAA@XZ
    MCAPI ~PerlinNoise();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_init@PerlinNoise@@AEAAXAEAVIRandom@@UYBlendingBugSettings@@@Z
    MCAPI void _init(class IRandom&, struct YBlendingBugSettings);

    // NOLINTEND
};
