#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace CaveFeatureUtils { struct CarverConfiguration; }
// clang-format on

namespace CaveFeatureUtils {
/**
 * @symbol ?getCurrentConfiguration\@CaveFeatureUtils\@\@YAAEBUCarverConfiguration\@1\@_N\@Z
 */
MCAPI struct CaveFeatureUtils::CarverConfiguration const& getCurrentConfiguration(bool);
/**
 * @symbol ?getDistance_1_16\@CaveFeatureUtils\@\@YAHAEAVRandom\@\@\@Z
 */
MCAPI int getDistance_1_16(class Random&);
/**
 * @symbol ?getDistance_1_18\@CaveFeatureUtils\@\@YAHAEAVRandom\@\@\@Z
 */
MCAPI int getDistance_1_18(class Random&);
/**
 * @symbol ?getTunnelThickness_1_16\@CaveFeatureUtils\@\@YAMAEAVRandom\@\@\@Z
 */
MCAPI float getTunnelThickness_1_16(class Random&);
/**
 * @symbol ?getTunnelThickness_1_18\@CaveFeatureUtils\@\@YAMAEAVRandom\@\@\@Z
 */
MCAPI float getTunnelThickness_1_18(class Random&);
/**
 * @symbol ?isDiggable_1_16\@CaveFeatureUtils\@\@YA_NAEBVBlock\@\@0\@Z
 */
MCAPI bool isDiggable_1_16(class Block const&, class Block const&);
/**
 * @symbol ?isDiggable_1_18\@CaveFeatureUtils\@\@YA_NAEBVBlock\@\@0\@Z
 */
MCAPI bool isDiggable_1_18(class Block const&, class Block const&);
/**
 * @symbol ?sampleFloatRange\@CaveFeatureUtils\@\@YAMAEBUFloatRange\@\@AEAVRandom\@\@\@Z
 */
MCAPI float sampleFloatRange(struct FloatRange const&, class Random&);

}; // namespace CaveFeatureUtils
