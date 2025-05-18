#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class Vec2;
// clang-format on

class SimplexNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>     mOrigin;
    ::ll::TypedStorage<4, 2048, int[512]> mNoiseMap;
    // NOLINTEND

public:
    // prevent constructor by default
    SimplexNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SimplexNoise(::IRandom& random, bool parityInitialization);

    MCNAPI float _getValue(::Vec2 const& vin) const;

    MCNAPI float _getValue(::Vec3 const& vin) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IRandom& random, bool parityInitialization);
    // NOLINTEND
};
