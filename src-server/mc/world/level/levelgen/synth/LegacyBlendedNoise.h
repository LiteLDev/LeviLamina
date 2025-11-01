#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/synth/PerlinNoise.h"

// auto generated forward declare list
// clang-format off
class IRandom;
// clang-format on

class LegacyBlendedNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::PerlinNoise const> minLimitNoise;
    ::ll::TypedStorage<8, 40, ::PerlinNoise const> maxLimitNoise;
    ::ll::TypedStorage<8, 40, ::PerlinNoise const> mainNoise;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LegacyBlendedNoise();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::LegacyBlendedNoise make(::IRandom& random);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
