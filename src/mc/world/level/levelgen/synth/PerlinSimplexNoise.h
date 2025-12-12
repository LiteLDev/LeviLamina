#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IRandom;
class SimplexNoise;
class Vec2;
class Vec3;
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
    PerlinSimplexNoise& operator=(PerlinSimplexNoise const&);
    PerlinSimplexNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PerlinSimplexNoise(::PerlinSimplexNoise const&);

    MCNAPI PerlinSimplexNoise(uint seed, int levels);

    MCNAPI void _init(::IRandom& r, bool parityInitialization);

    MCNAPI float* getRegion(
        float*        buffer,
        ::Vec2 const& pos,
        int           xSize,
        int           ySize,
        ::Vec2 const& scale,
        float         sizeScale,
        float         powScale
    ) const;

    MCNAPI float getValue(::Vec3 const& pos) const;

    MCNAPI float getValue(float x, float y) const;

    MCNAPI ~PerlinSimplexNoise();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PerlinSimplexNoise const&);

    MCNAPI void* $ctor(uint seed, int levels);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
