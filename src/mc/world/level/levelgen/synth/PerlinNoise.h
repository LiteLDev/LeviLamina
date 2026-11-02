#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class ImprovedNoise;
class Vec3;
// clang-format on

class PerlinNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>                       mLevels;
    ::ll::TypedStorage<8, 24, ::std::vector<::ImprovedNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                           mNormalizationFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    PerlinNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PerlinNoise(::IRandom& random, int levels);

    MCNAPI PerlinNoise(uint seed, int levels);

    MCNAPI float getValue(::Vec3 const& pos) const;

    MCNAPI ~PerlinNoise();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::IRandom& random, int levels);

    MCNAPI void* $ctor(uint seed, int levels);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
