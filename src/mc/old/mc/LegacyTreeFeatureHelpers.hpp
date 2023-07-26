/**
 * @file  LegacyTreeFeatureHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace LegacyTreeFeatureHelpers.
 *
 */
namespace LegacyTreeFeatureHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol  ?_placeTrees\@LegacyTreeFeatureHelpers\@\@YAXAEAVIBlockWorldGenAPI\@\@AEBVBlockPos\@\@AEAVRandom\@\@HAEAVRenderParams\@\@V?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEBV?$function\@$$A6A?AV?$WeakRefT\@UFeatureRefTraits\@\@\@\@AEAVRandom\@\@\@Z\@std\@\@\@Z
     */
    MCAPI void _placeTrees(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, class WeakRefT<struct FeatureRefTraits>, class std::function<class WeakRefT<struct FeatureRefTraits> (class Random &)> const &);
    /**
     * @symbol  ?_setupForestCount\@LegacyTreeFeatureHelpers\@\@YAXMAEAHAEAVRandom\@\@\@Z
     */
    MCAPI void _setupForestCount(float, int &, class Random &);

};