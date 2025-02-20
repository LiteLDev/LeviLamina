#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class ImprovedNoise;
class Vec3;
struct YBlendingBugSettings;
// clang-format on

class PerlinNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>                       mLevels;
    ::ll::TypedStorage<4, 4, int const>                       mMinLevel;
    ::ll::TypedStorage<8, 24, ::std::vector<::ImprovedNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                           mNormalizationFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    PerlinNoise& operator=(PerlinNoise const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PerlinNoise(::PerlinNoise const&);

    MCAPI PerlinNoise(uint seed, int levels, int minLevel);

    MCAPI void _init(::IRandom& random, ::YBlendingBugSettings yBlendingSettings);

    MCAPI void getRegion(float* buffer, ::Vec3 const& pos, int xSize, int ySize, int zSize, ::Vec3 const& scale) const;

    MCAPI float getValue(::Vec3 const& pos) const;

    MCAPI ~PerlinNoise();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PerlinNoise const&);

    MCAPI void* $ctor(uint seed, int levels, int minLevel);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
