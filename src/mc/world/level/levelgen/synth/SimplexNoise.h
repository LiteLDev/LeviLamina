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
    MCAPI SimplexNoise(class IRandom& random, bool parityInitialization);

    MCAPI float _getValue(class Vec2 const& vin) const;

    MCAPI float _getValue(class Vec3 const& vin) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
