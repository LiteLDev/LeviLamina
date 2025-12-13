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
    ::ll::TypedStorage<8, 24, ::std::vector<::ImprovedNoise>> mNoiseLevels;
    ::ll::TypedStorage<4, 4, float>                           mNormalizationFactor;
    // NOLINTEND

public:
    // prevent constructor by default
    PerlinNoise& operator=(PerlinNoise const&);
    PerlinNoise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PerlinNoise(::PerlinNoise const&);

    MCNAPI PerlinNoise(uint seed, int levels);

    MCNAPI void _init(::IRandom& random, ::YBlendingBugSettings yBlendingSettings);

    MCNAPI void fillRegion(
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

    MCNAPI float getValue(::Vec3 const& pos) const;

    MCNAPI ~PerlinNoise();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PerlinNoise const&);

    MCNAPI void* $ctor(uint seed, int levels);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
