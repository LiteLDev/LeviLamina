#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRefT.h"

namespace LegacyTreeFeatureHelpers {
// NOLINTBEGIN
// symbol:
// ?_placeTrees@LegacyTreeFeatureHelpers@@YAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@V?$WeakRefT@UFeatureRefTraits@@@@AEBV?$function@$$A6A?AV?$WeakRefT@UFeatureRefTraits@@@@AEAVRandom@@@Z@std@@@Z
MCAPI void _placeTrees(
    class IBlockWorldGenAPI&                                                     target,
    class BlockPos const&                                                        origin,
    class Random&                                                                random,
    int                                                                          forests,
    class RenderParams&                                                          renderParams,
    class WeakRefT<struct FeatureRefTraits>                                      tallGrassFeature,
    std::function<class WeakRefT<struct FeatureRefTraits>(class Random&)> const& getTreeFeature
);

// symbol: ?_setupForestCount@LegacyTreeFeatureHelpers@@YAXMAEAHAEAVRandom@@@Z
MCAPI void _setupForestCount(float treeCount, int& forests, class Random& random);
// NOLINTEND

}; // namespace LegacyTreeFeatureHelpers
