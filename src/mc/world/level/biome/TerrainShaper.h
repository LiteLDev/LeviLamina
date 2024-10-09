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
        float mContinents;
        float mErosion;
        float mRidges;
        float mWeirdness;

    public:
        // prevent constructor by default
        Point& operator=(Point const&);
        Point(Point const&);
        Point();

    public:
        // NOLINTBEGIN
        MCAPI static float getContinents(struct TerrainShaper::Point const& point);

        MCAPI static float getErosion(struct TerrainShaper::Point const& point);

        MCAPI static float getRidges(struct TerrainShaper::Point const& point);

        MCAPI static float getWeirdness(struct TerrainShaper::Point const& point);

        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> CONTINENTS_EXTRACTOR;

        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> EROSION_EXTRACTOR;

        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> RIDGES_EXTRACTOR;

        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> WEIRDNESS_EXTRACTOR;

        // NOLINTEND
    };

public:
    // prevent constructor by default
    TerrainShaper& operator=(TerrainShaper const&);
    TerrainShaper(TerrainShaper const&);
    TerrainShaper();

public:
    // NOLINTBEGIN
    MCAPI float factor(float continentalness, float erosion, float weirdness) const;

    MCAPI float jaggedness(float continentalness, float erosion, float weirdness) const;

    MCAPI float offset(float continentalness, float erosion, float weirdness) const;

    MCAPI static class TerrainShaper buildOverworld();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildErosionJaggednessSpline(
        float jaggednessFactorAtPeakRidgeAndErosionIndex0,
        float jaggednessFactorAtPeakRidgeAndErosionIndex1,
        float jaggednessFactorAtHighRidgeAndErosionIndex0,
        float jaggednessFactorAtHighRidgeAndErosionIndex1
    );

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildErosionOffsetSpline(
        std::string const& name,
        float              lowValley,
        float              hill,
        float              tallHill,
        float              mountainFactor,
        float              plain,
        float              swamp,
        bool               includeExtremeHills,
        bool               saddle
    );

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildMountainRidgeSplineWithPoints(float modulation, bool saddle);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildRidgeJaggednessSpline(float jaggednessFactorAtPeakRidge, float jaggednessFactorAtHighRidge);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildWeirdnessJaggednessSpline(float jaggednessFactor);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    getErosionFactor(float baseValue, bool shatteredTerrain);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> ridgeSpline(
        std::string const& name,
        float              valley,
        float              low,
        float              mid,
        float              high,
        float              peaks,
        float              minValleySteepness
    );

    // NOLINTEND
};
