#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SimplexNoise {
public:
    // prevent constructor by default
    SimplexNoise& operator=(SimplexNoise const&);
    SimplexNoise(SimplexNoise const&);
    SimplexNoise();

public:
    // NOLINTBEGIN
    MCAPI SimplexNoise(class IRandom& random, bool);

    MCAPI float _getValue(class Vec2 const& vin) const;

    MCAPI float _getValue(class Vec3 const& vin) const;

    // NOLINTEND
};
