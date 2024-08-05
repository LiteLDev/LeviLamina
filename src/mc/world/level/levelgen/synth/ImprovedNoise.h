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
    MCAPI void
    _readArea(float* buffer, class Vec3 const& pos, int xSize, int ySize, int zSize, class Vec3 const& s, float pow)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _blendCubeCorners(
        class Vec3 const& origin,
        int               X,
        int               Y,
        int               Z,
        float             u,
        float&            vv0,
        float&            vv1,
        float&            vv2,
        float&            vv3
    ) const;

    MCAPI void _init(class Vec3 const& origin, class IRandom& random, struct YBlendingBugSettings);

    // NOLINTEND
};
