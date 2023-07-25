#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimplexNoise {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SIMPLEXNOISE
public:
    SimplexNoise& operator=(SimplexNoise const&) = delete;
    SimplexNoise(SimplexNoise const&)            = delete;
    SimplexNoise()                               = delete;
#endif

public:
    /**
     * @symbol ??0SimplexNoise\@\@QEAA\@AEAVIRandom\@\@_N\@Z
     */
    MCAPI SimplexNoise(class IRandom&, bool);
    /**
     * @symbol ?_getValue\@SimplexNoise\@\@QEBAMAEBVVec3\@\@\@Z
     */
    MCAPI float _getValue(class Vec3 const&) const;
    /**
     * @symbol ?_getValue\@SimplexNoise\@\@QEBAMAEBVVec2\@\@\@Z
     */
    MCAPI float _getValue(class Vec2 const&) const;
};
