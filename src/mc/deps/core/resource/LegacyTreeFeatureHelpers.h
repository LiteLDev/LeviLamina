#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
template<typename T0> class WeakRefT;
// clang-format on

namespace LegacyTreeFeatureHelpers {
/**
 * @symbol
 * ?_placeTrees\@LegacyTreeFeatureHelpers\@\@YAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@V?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$function\@$$A6A?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEAVRandom\@\@\@Z\@std\@\@\@Z
 */
MCAPI void
_placeTrees(class IBlockWorldGenAPI&, class BlockPos const&, class Random&, int, class RenderParams&, class WeakRefT<struct FeatureRefTraits>, class std::function<class WeakRefT<struct FeatureRefTraits>(class Random&)> const&); // NOLINT
/**
 * @symbol ?_setupForestCount\@LegacyTreeFeatureHelpers\@\@YAXMAEAHAEAVRandom\@\@\@Z
 */
MCAPI void _setupForestCount(float, int&, class Random&); // NOLINT

}; // namespace LegacyTreeFeatureHelpers
