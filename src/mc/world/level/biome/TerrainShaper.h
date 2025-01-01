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

    public:
        // static functions
        // NOLINTBEGIN
        MCAPI static float getContinents(::TerrainShaper::Point const& point);

        MCAPI static float getErosion(::TerrainShaper::Point const& point);

        MCAPI static float getRidges(::TerrainShaper::Point const& point);

        MCAPI static float getWeirdness(::TerrainShaper::Point const& point);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCAPI static ::ToFloatFunction<::TerrainShaper::Point>& CONTINENTS_EXTRACTOR();

        MCAPI static ::ToFloatFunction<::TerrainShaper::Point>& EROSION_EXTRACTOR();

        MCAPI static ::ToFloatFunction<::TerrainShaper::Point>& RIDGES_EXTRACTOR();

        MCAPI static ::ToFloatFunction<::TerrainShaper::Point>& WEIRDNESS_EXTRACTOR();
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
    MCAPI TerrainShaper(::TerrainShaper const&);

    MCAPI TerrainShaper(
        ::ToFloatFunction<::TerrainShaper::Point> offsetSpline,
        ::ToFloatFunction<::TerrainShaper::Point> factorSpline,
        ::ToFloatFunction<::TerrainShaper::Point> jaggednessSpline
    );

    MCAPI float factor(float continentalness, float erosion, float weirdness) const;

    MCAPI float jaggedness(float continentalness, float erosion, float weirdness) const;

    MCAPI float offset(float continentalness, float erosion, float weirdness) const;

    MCAPI ~TerrainShaper();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> buildErosionJaggednessSpline(
        float jaggednessFactorAtPeakRidgeAndErosionIndex0,
        float jaggednessFactorAtPeakRidgeAndErosionIndex1,
        float jaggednessFactorAtHighRidgeAndErosionIndex0,
        float jaggednessFactorAtHighRidgeAndErosionIndex1
    );

    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> buildErosionOffsetSpline(
        ::std::string const& name,
        float                lowValley,
        float                hill,
        float                tallHill,
        float                mountainFactor,
        float                plain,
        float                swamp,
        bool                 includeExtremeHills,
        bool                 saddle
    );

    MCAPI static ::ToFloatFunction<::TerrainShaper::Point>
    buildMountainRidgeSplineWithPoints(float modulation, bool saddle);

    MCAPI static ::TerrainShaper buildOverworld();

    MCAPI static ::ToFloatFunction<::TerrainShaper::Point>
    buildRidgeJaggednessSpline(float jaggednessFactorAtPeakRidge, float jaggednessFactorAtHighRidge);

    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> buildWeirdnessJaggednessSpline(float jaggednessFactor);

    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> getErosionFactor(float baseValue, bool shatteredTerrain);

    MCAPI static ::ToFloatFunction<::TerrainShaper::Point> ridgeSpline(
        ::std::string const& name,
        float                valley,
        float                low,
        float                mid,
        float                high,
        float                peaks,
        float                minValleySteepness
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TerrainShaper const&);

    MCAPI void* $ctor(
        ::ToFloatFunction<::TerrainShaper::Point> offsetSpline,
        ::ToFloatFunction<::TerrainShaper::Point> factorSpline,
        ::ToFloatFunction<::TerrainShaper::Point> jaggednessSpline
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
