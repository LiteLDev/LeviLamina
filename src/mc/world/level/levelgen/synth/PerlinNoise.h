#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class ImprovedNoise;
class Vec2;
class Vec3;
struct YBlendingBugSettings;
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
    MCAPI PerlinNoise(::IRandom& random, int levels);

    MCAPI PerlinNoise(uint seed, int levels);

    MCAPI PerlinNoise(::IRandom& random, ::YBlendingBugSettings yBlendingSettings, int levels);

    MCAPI void fillRegion(float* buffer, ::Vec2 const& pos, int xSize, int zSize, ::Vec2 const& scale) const;

    MCAPI void fillRegion(
        float*        buffer,
        ::Vec3 const& pos,
        int           xSize,
        int           ySize,
        int           zSize,
        ::Vec3 const& scale,
        int           xStep,
        int           yStep,
        int           zStep
    ) const;

    MCAPI float getValue(::Vec3 const& pos) const;

    MCAPI float getValueNormalized(::Vec3 const& pos) const;

    MCAPI ~PerlinNoise();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IRandom& random, int levels);

    MCAPI void* $ctor(uint seed, int levels);

    MCAPI void* $ctor(::IRandom& random, ::YBlendingBugSettings yBlendingSettings, int levels);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
