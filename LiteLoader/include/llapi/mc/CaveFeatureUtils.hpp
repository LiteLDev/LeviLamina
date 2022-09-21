/**
 * @file  MC/CaveFeatureUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace CaveFeatureUtils.
 *
 */
namespace CaveFeatureUtils {

#define AFTER_EXTRA
// Add Member There
struct CarverConfiguration {
    CarverConfiguration() = delete;
    CarverConfiguration(CarverConfiguration const&) = delete;
    CarverConfiguration(CarverConfiguration const&&) = delete;
};
struct CarvingParameters {
    CarvingParameters() = delete;
    CarvingParameters(CarvingParameters const&) = delete;
    CarvingParameters(CarvingParameters const&&) = delete;
};

#undef AFTER_EXTRA
    /**
     * @hash   337344135
     * @symbol ?getCurrentConfiguration@CaveFeatureUtils@@YAAEBUCarverConfiguration@1@_N@Z
     */
    MCAPI struct CaveFeatureUtils::CarverConfiguration const & getCurrentConfiguration(bool);
    /**
     * @hash   -511103898
     * @symbol ?getDistance_1_16@CaveFeatureUtils@@YAHAEAVRandom@@@Z
     */
    MCAPI int getDistance_1_16(class Random &);
    /**
     * @hash   -183164094
     * @symbol ?getDistance_1_18@CaveFeatureUtils@@YAHAEAVRandom@@@Z
     */
    MCAPI int getDistance_1_18(class Random &);
    /**
     * @hash   -42007710
     * @symbol ?getTunnelThickness_1_16@CaveFeatureUtils@@YAMAEAVRandom@@@Z
     */
    MCAPI float getTunnelThickness_1_16(class Random &);
    /**
     * @hash   -1014047202
     * @symbol ?getTunnelThickness_1_18@CaveFeatureUtils@@YAMAEAVRandom@@@Z
     */
    MCAPI float getTunnelThickness_1_18(class Random &);
    /**
     * @hash   416942816
     * @symbol ?isDiggable_1_16@CaveFeatureUtils@@YA_NAEBVBlock@@0@Z
     */
    MCAPI bool isDiggable_1_16(class Block const &, class Block const &);
    /**
     * @hash   346921284
     * @symbol ?isDiggable_1_18@CaveFeatureUtils@@YA_NAEBVBlock@@0@Z
     */
    MCAPI bool isDiggable_1_18(class Block const &, class Block const &);
    /**
     * @hash   -1490347143
     * @symbol ?sampleFloatRange@CaveFeatureUtils@@YAMAEBUFloatRange@@AEAVRandom@@@Z
     */
    MCAPI float sampleFloatRange(struct FloatRange const &, class Random &);

};