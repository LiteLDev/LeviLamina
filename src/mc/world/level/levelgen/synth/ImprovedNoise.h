#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ImprovedNoise {
public:
    // prevent constructor by default
    ImprovedNoise& operator=(ImprovedNoise const&);
    ImprovedNoise(ImprovedNoise const&);
    ImprovedNoise();

public:
    // NOLINTBEGIN
    // symbol: ?_readArea@ImprovedNoise@@QEBAXPEAMAEBVVec3@@HHH1M@Z
    MCAPI void
    _readArea(float* buffer, class Vec3 const& pos, int xSize, int ySize, int zSize, class Vec3 const& s, float pow)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_blendCubeCorners@ImprovedNoise@@AEBAXAEBVVec3@@HHHMAEAM111@Z
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

    // symbol: ?_init@ImprovedNoise@@AEAAXAEBVVec3@@AEAVIRandom@@UYBlendingBugSettings@@@Z
    MCAPI void _init(class Vec3 const& origin, class IRandom& random, struct YBlendingBugSettings);

    // NOLINTEND
};
