/**
 * @file  TerrainShaper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TerrainShaper.
 *
 */
class TerrainShaper {

#define AFTER_EXTRA
// Add Member There
public:
struct Point {
    Point() = delete;
    Point(Point const&) = delete;
    Point(Point const&&) = delete;
};

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TERRAINSHAPER
public:
    class TerrainShaper& operator=(class TerrainShaper const &) = delete;
    TerrainShaper(class TerrainShaper const &) = delete;
    TerrainShaper() = delete;
#endif

public:
    /**
     * @hash   723615365
     * @symbol ?factor@TerrainShaper@@QEBAMMMM@Z
     */
    MCAPI float factor(float, float, float) const;
    /**
     * @hash   -1505662359
     * @symbol ?jaggedness@TerrainShaper@@QEBAMMMM@Z
     */
    MCAPI float jaggedness(float, float, float) const;
    /**
     * @hash   472072573
     * @symbol ?offset@TerrainShaper@@QEBAMMMM@Z
     */
    MCAPI float offset(float, float, float) const;
    /**
     * @hash   1421286969
     * @symbol ?buildOverworld@TerrainShaper@@SA?AV1@XZ
     */
    MCAPI static class TerrainShaper buildOverworld();

//private:
    /**
     * @hash   -323910178
     * @symbol ?buildErosionJaggednessSpline@TerrainShaper@@CA?AV?$ToFloatFunction@UPoint@TerrainShaper@@@@MMMM@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildErosionJaggednessSpline(float, float, float, float);
    /**
     * @hash   -1543281780
     * @symbol ?buildErosionOffsetSpline@TerrainShaper@@CA?AV?$ToFloatFunction@UPoint@TerrainShaper@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MMMMMM_N1@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildErosionOffsetSpline(std::string const &, float, float, float, float, float, float, bool, bool);
    /**
     * @hash   -1678025757
     * @symbol ?buildMountainRidgeSplineWithPoints@TerrainShaper@@CA?AV?$ToFloatFunction@UPoint@TerrainShaper@@@@M_N@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildMountainRidgeSplineWithPoints(float, bool);
    /**
     * @hash   -1438378878
     * @symbol ?buildRidgeJaggednessSpline@TerrainShaper@@CA?AV?$ToFloatFunction@UPoint@TerrainShaper@@@@MM@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildRidgeJaggednessSpline(float, float);
    /**
     * @hash   -1254810213
     * @symbol ?buildWeirdnessJaggednessSpline@TerrainShaper@@CA?AV?$ToFloatFunction@UPoint@TerrainShaper@@@@M@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> buildWeirdnessJaggednessSpline(float);
    /**
     * @hash   1666794633
     * @symbol ?getErosionFactor@TerrainShaper@@CA?AV?$ToFloatFunction@UPoint@TerrainShaper@@@@M_N@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> getErosionFactor(float, bool);
    /**
     * @hash   -1823078995
     * @symbol ?ridgeSpline@TerrainShaper@@CA?AV?$ToFloatFunction@UPoint@TerrainShaper@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@MMMMMM@Z
     */
    MCAPI static class ToFloatFunction<struct TerrainShaper::Point> ridgeSpline(std::string const &, float, float, float, float, float, float);

private:

};