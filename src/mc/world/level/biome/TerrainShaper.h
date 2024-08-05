#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/ToFloatFunction.h"

class TerrainShaper {
public:
    // TerrainShaper inner types declare
    // clang-format off
    struct Point;
    // clang-format on

    // TerrainShaper inner types define
    struct Point {
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
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildErosionJaggednessSpline(float, float, float, float);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildErosionOffsetSpline(std::string const& name, float, float, float, float, float, float, bool, bool);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildMountainRidgeSplineWithPoints(float, bool);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildRidgeJaggednessSpline(float, float);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildWeirdnessJaggednessSpline(float);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> getErosionFactor(float, bool);

    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    ridgeSpline(std::string const& name, float, float low, float, float high, float, float);

    // NOLINTEND
};
