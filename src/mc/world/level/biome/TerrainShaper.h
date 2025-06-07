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
        MCNAPI static float getContinents(::TerrainShaper::Point const& point);

        MCNAPI static float getErosion(::TerrainShaper::Point const& point);

        MCNAPI static float getRidges(::TerrainShaper::Point const& point);

        MCNAPI static float getWeirdness(::TerrainShaper::Point const& point);
        // NOLINTEND

    public:
        // static variables
        // NOLINTBEGIN
        MCNAPI static ::ToFloatFunction<::TerrainShaper::Point>& CONTINENTS_EXTRACTOR();

        MCNAPI static ::ToFloatFunction<::TerrainShaper::Point>& EROSION_EXTRACTOR();

        MCNAPI static ::ToFloatFunction<::TerrainShaper::Point>& RIDGES_EXTRACTOR();

        MCNAPI static ::ToFloatFunction<::TerrainShaper::Point>& WEIRDNESS_EXTRACTOR();
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
    // prevent constructor by default
    TerrainShaper& operator=(TerrainShaper const&);
    TerrainShaper();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI TerrainShaper(::TerrainShaper const&);

    MCNAPI TerrainShaper(
        ::ToFloatFunction<::TerrainShaper::Point> offsetSpline,
        ::ToFloatFunction<::TerrainShaper::Point> factorSpline,
        ::ToFloatFunction<::TerrainShaper::Point> jaggednessSpline
    );

    MCNAPI float offset(float continentalness, float erosion, float weirdness) const;

    MCNAPI ~TerrainShaper();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ToFloatFunction<::TerrainShaper::Point> buildErosionJaggednessSpline(
        float jaggednessFactorAtPeakRidgeAndErosionIndex0,
        float jaggednessFactorAtPeakRidgeAndErosionIndex1,
        float jaggednessFactorAtHighRidgeAndErosionIndex0,
        float jaggednessFactorAtHighRidgeAndErosionIndex1
    );

    MCNAPI static ::ToFloatFunction<::TerrainShaper::Point> buildErosionOffsetSpline(
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

    MCNAPI static ::ToFloatFunction<::TerrainShaper::Point>
    buildMountainRidgeSplineWithPoints(float modulation, bool saddle);

    MCNAPI static ::TerrainShaper buildOverworld();

    MCNAPI static ::ToFloatFunction<::TerrainShaper::Point>
    buildRidgeJaggednessSpline(float jaggednessFactorAtPeakRidge, float jaggednessFactorAtHighRidge);

    MCNAPI static ::ToFloatFunction<::TerrainShaper::Point> buildWeirdnessJaggednessSpline(float jaggednessFactor);

    MCNAPI static ::ToFloatFunction<::TerrainShaper::Point> getErosionFactor(float baseValue, bool shatteredTerrain);

    MCNAPI static ::ToFloatFunction<::TerrainShaper::Point> ridgeSpline(
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
    MCNAPI void* $ctor(::TerrainShaper const&);

    MCNAPI void* $ctor(
        ::ToFloatFunction<::TerrainShaper::Point> offsetSpline,
        ::ToFloatFunction<::TerrainShaper::Point> factorSpline,
        ::ToFloatFunction<::TerrainShaper::Point> jaggednessSpline
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
