/**
 * @file  CaveFeatureUtils.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ?getCurrentConfiguration\@CaveFeatureUtils\@\@YAAEBUCarverConfiguration\@1\@_N\@Z
     */
    MCAPI struct CaveFeatureUtils::CarverConfiguration const & getCurrentConfiguration(bool);
    /**
     * @symbol  ?getDistance_1_16\@CaveFeatureUtils\@\@YAHAEAVRandom\@\@\@Z
     */
    MCAPI int getDistance_1_16(class Random &);
    /**
     * @symbol  ?getDistance_1_18\@CaveFeatureUtils\@\@YAHAEAVRandom\@\@\@Z
     */
    MCAPI int getDistance_1_18(class Random &);
    /**
     * @symbol  ?getTunnelThickness_1_16\@CaveFeatureUtils\@\@YAMAEAVRandom\@\@\@Z
     */
    MCAPI float getTunnelThickness_1_16(class Random &);
    /**
     * @symbol  ?getTunnelThickness_1_18\@CaveFeatureUtils\@\@YAMAEAVRandom\@\@\@Z
     */
    MCAPI float getTunnelThickness_1_18(class Random &);
    /**
     * @symbol  ?isDiggable_1_16\@CaveFeatureUtils\@\@YA_NAEBVBlock\@\@0\@Z
     */
    MCAPI bool isDiggable_1_16(class Block const &, class Block const &);
    /**
     * @symbol  ?isDiggable_1_18\@CaveFeatureUtils\@\@YA_NAEBVBlock\@\@0\@Z
     */
    MCAPI bool isDiggable_1_18(class Block const &, class Block const &);
    /**
     * @symbol  ?sampleFloatRange\@CaveFeatureUtils\@\@YAMAEBUFloatRange\@\@AEAVRandom\@\@\@Z
     */
    MCAPI float sampleFloatRange(struct FloatRange const &, class Random &);

};