#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ImprovedNoise {

public:
    // prevent constructor by default
    ImprovedNoise& operator=(ImprovedNoise const&) = delete;
    ImprovedNoise(ImprovedNoise const&)            = delete;
    ImprovedNoise()                                = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?_readArea\@ImprovedNoise\@\@QEBAXPEAMAEBVVec3\@\@HHH1M\@Z
     */
    MCAPI void _readArea(float*, class Vec3 const&, int, int, int, class Vec3 const&, float) const;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?_blendCubeCorners\@ImprovedNoise\@\@AEBAXAEBVVec3\@\@HHHMAEAM111\@Z
     */
    MCAPI void _blendCubeCorners(class Vec3 const&, int, int, int, float, float&, float&, float&, float&) const;
    /**
     * @symbol ?_init\@ImprovedNoise\@\@AEAAXAEBVVec3\@\@AEAVIRandom\@\@UYBlendingBugSettings\@\@\@Z
     */
    MCAPI void _init(class Vec3 const&, class IRandom&, struct YBlendingBugSettings);
    // NOLINTEND
};
