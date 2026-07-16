#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/biome/ToFloatFunction.h"

class TerrainShaper {
public:
    // TerrainShaper inner types declare
    // clang-format off
    struct Point;
    // clang-format on

    // TerrainShaper inner types define
    struct Point {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float const> mContinents;
        ::ll::TypedStorage<4, 4, float const> mErosion;
        ::ll::TypedStorage<4, 4, float const> mRidges;
        ::ll::TypedStorage<4, 4, float const> mWeirdness;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 168, ::ToFloatFunction<::TerrainShaper::Point> const> mOffsetSpline;
    ::ll::TypedStorage<8, 168, ::ToFloatFunction<::TerrainShaper::Point> const> mFactorSpline;
    ::ll::TypedStorage<8, 168, ::ToFloatFunction<::TerrainShaper::Point> const> mJaggednessSpline;
    ::ll::TypedStorage<4, 4, float const>                                       GLOBAL_OFFSET;
    ::ll::TypedStorage<4, 4, float const>                                       FACTOR_SCALER;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~TerrainShaper();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TerrainShaper buildOverworld();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
