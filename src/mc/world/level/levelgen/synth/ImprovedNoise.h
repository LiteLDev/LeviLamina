#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/math/Vec3.h"
#include "mc/world/level/levelgen/synth/YBlendingBugSettings.h"

class ImprovedNoise {
public:
    Vec3                 mOrigin;            // this+0x0
    int                  mNoiseMap[512];     // this+0xC
    YBlendingBugSettings mYBlendingSettings; // this+0x80C

    // prevent constructor by default
    ImprovedNoise& operator=(ImprovedNoise const&);
    ImprovedNoise(ImprovedNoise const&);
    ImprovedNoise();

public:
    // NOLINTBEGIN
    // symbol: ?_readArea@ImprovedNoise@@QEBAXPEAMAEBVVec3@@HHH1M@Z
    MCAPI void _readArea(float*, class Vec3 const&, int, int, int, class Vec3 const&, float) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_blendCubeCorners@ImprovedNoise@@AEBAXAEBVVec3@@HHHMAEAM111@Z
    MCAPI void _blendCubeCorners(class Vec3 const&, int, int, int, float, float&, float&, float&, float&) const;

    // symbol: ?_init@ImprovedNoise@@AEAAXAEBVVec3@@AEAVIRandom@@UYBlendingBugSettings@@@Z
    MCAPI void _init(class Vec3 const&, class IRandom&, struct YBlendingBugSettings);

    // NOLINTEND
};
