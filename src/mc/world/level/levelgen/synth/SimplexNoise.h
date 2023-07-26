#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimplexNoise {

public:
    // prevent constructor by default
    SimplexNoise& operator=(SimplexNoise const&) = delete;
    SimplexNoise(SimplexNoise const&)            = delete;
    SimplexNoise()                               = delete;

public:
    /**
     * @symbol ??0SimplexNoise\@\@QEAA\@AEAVIRandom\@\@_N\@Z
     */
    MCAPI SimplexNoise(class IRandom&, bool); // NOLINT
    /**
     * @symbol ?_getValue\@SimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float _getValue(class Vec3 const&) const; // NOLINT
    /**
     * @symbol ?_getValue\@SimplexNoise\@\@QEBAMAEBVVec2\@\@\@Z
     */
    MCAPI float _getValue(class Vec2 const&) const; // NOLINT
};
