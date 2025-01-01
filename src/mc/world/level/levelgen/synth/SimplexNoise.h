#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class Vec2;
class Vec3;
// clang-format on

class SimplexNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>     mOrigin;
    ::ll::TypedStorage<4, 2048, int[512]> mNoiseMap;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SimplexNoise(::IRandom& random, bool parityInitialization);

    MCAPI float _getValue(::Vec2 const& vin) const;

    MCAPI float _getValue(::Vec3 const& vin) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IRandom& random, bool parityInitialization);
    // NOLINTEND
};
