#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SimplexNoise;
class Vec2;
// clang-format on

class PerlinSimplexNoise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                            mLevels;
    ::ll::TypedStorage<8, 24, ::std::vector<::SimplexNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                          mNormalizationFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    PerlinSimplexNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PerlinSimplexNoise(uint seed, int levels);

    MCAPI float* getRegion(
        float*        buffer,
        ::Vec2 const& pos,
        int           xSize,
        int           ySize,
        ::Vec2 const& scale,
        float         sizeScale,
        float         powScale
    ) const;

    MCAPI float getValue(float x, float y) const;

    MCAPI ~PerlinSimplexNoise();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(uint seed, int levels);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
