#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimplexNoise {
public:
    Vec3 mOrigin;        // this+0x0
    int  mNoiseMap[512]; // this+0xC

    // prevent constructor by default
    SimplexNoise& operator=(SimplexNoise const&);
    SimplexNoise(SimplexNoise const&);
    SimplexNoise();

public:
    // NOLINTBEGIN
    // symbol: ??0SimplexNoise@@QEAA@AEAVIRandom@@_N@Z
    MCAPI SimplexNoise(class IRandom& random, bool);

    // symbol: ?_getValue@SimplexNoise@@QEBAMAEBVVec2@@@Z
    MCAPI float _getValue(class Vec2 const& vin) const;

    // symbol: ?_getValue@SimplexNoise@@QEBAMAEBVVec3@@@Z
    MCAPI float _getValue(class Vec3 const& vin) const;

    // NOLINTEND
};
