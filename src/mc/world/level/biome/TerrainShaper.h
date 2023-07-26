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
        Point& operator=(Point const&) = delete;
        Point(Point const&)            = delete;
        Point()                        = delete;

    public:
        /**
         * @symbol ?getContinents\@Point\@TerrainShaper\@\@SAMAEBU12\@\@Z
         */
        MCAPI static float getContinents(struct TerrainShaper::Point const&); // NOLINT
        /**
         * @symbol ?getErosion\@Point\@TerrainShaper\@\@SAMAEBU12\@\@Z
         */
        MCAPI static float getErosion(struct TerrainShaper::Point const&); // NOLINT
        /**
         * @symbol ?getRidges\@Point\@TerrainShaper\@\@SAMAEBU12\@\@Z
         */
        MCAPI static float getRidges(struct TerrainShaper::Point const&); // NOLINT
        /**
         * @symbol ?getWeirdness\@Point\@TerrainShaper\@\@SAMAEBU12\@\@Z
         */
        MCAPI static float getWeirdness(struct TerrainShaper::Point const&); // NOLINT
        /**
         * @symbol ?CONTINENTS_EXTRACTOR\@Point\@TerrainShaper\@\@2V?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@A
         */
        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> CONTINENTS_EXTRACTOR; // NOLINT
        /**
         * @symbol ?EROSION_EXTRACTOR\@Point\@TerrainShaper\@\@2V?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@A
         */
        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> EROSION_EXTRACTOR; // NOLINT
        /**
         * @symbol ?RIDGES_EXTRACTOR\@Point\@TerrainShaper\@\@2V?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@A
         */
        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> RIDGES_EXTRACTOR; // NOLINT
        /**
         * @symbol ?WEIRDNESS_EXTRACTOR\@Point\@TerrainShaper\@\@2V?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@A
         */
        MCAPI static class ToFloatFunction<struct TerrainShaper::Point> WEIRDNESS_EXTRACTOR; // NOLINT
    };

public:
    // prevent constructor by default
    TerrainShaper& operator=(TerrainShaper const&) = delete;
    TerrainShaper(TerrainShaper const&)            = delete;
    TerrainShaper()                                = delete;

public:
    /**
     * @symbol ?factor\@TerrainShaper\@\@QEBAMMMM\@Z
     */
    MCAPI float factor(float, float, float) const; // NOLINT
    /**
     * @symbol ?jaggedness\@TerrainShaper\@\@QEBAMMMM\@Z
     */
    MCAPI float jaggedness(float, float, float) const; // NOLINT
    /**
     * @symbol ?offset\@TerrainShaper\@\@QEBAMMMM\@Z
     */
    MCAPI float offset(float, float, float) const; // NOLINT
    /**
     * @symbol ?buildOverworld\@TerrainShaper\@\@SA?AV1\@XZ
     */
    MCAPI static class TerrainShaper buildOverworld(); // NOLINT

    // private:
    /**
     * @symbol
     * ?buildErosionJaggednessSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@MMMM\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildErosionJaggednessSpline(float, float, float, float); // NOLINT
    /**
     * @symbol
     * ?buildErosionOffsetSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MMMMMM_N1\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildErosionOffsetSpline(std::string const&, float, float, float, float, float, float, bool, bool); // NOLINT
    /**
     * @symbol
     * ?buildMountainRidgeSplineWithPoints\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@M_N\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    buildMountainRidgeSplineWithPoints(float, bool); // NOLINT
    /**
     * @symbol ?buildRidgeJaggednessSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@MM\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildRidgeJaggednessSpline(float, float); // NOLINT
    /**
     * @symbol
     * ?buildWeirdnessJaggednessSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@M\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildWeirdnessJaggednessSpline(float); // NOLINT
    /**
     * @symbol ?getErosionFactor\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@M_N\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> getErosionFactor(float, bool); // NOLINT
    /**
     * @symbol
     * ?ridgeSpline\@TerrainShaper\@\@CA?AV?$ToFloatFunction\@UPoint\@TerrainShaper\@\@\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MMMMMM\@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point>
    ridgeSpline(std::string const&, float, float, float, float, float, float); // NOLINT

private:
};
