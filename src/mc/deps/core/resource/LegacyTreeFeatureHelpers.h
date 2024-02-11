#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

namespace LegacyTreeFeatureHelpers {
// NOLINTBEGIN
// symbol:
// ?_placeTrees@LegacyTreeFeatureHelpers@@YAXAEAVIBlockWorldGenAPI@@AEBVBlockPos@@AEAVRandom@@HAEAVRenderParams@@V?$WeakRef@VIFeature@@@@AEBV?$function@$$A6A?AV?$WeakRef@VIFeature@@@@AEAVRandom@@@Z@std@@@Z
MCAPI void _placeTrees(
    class IBlockWorldGenAPI&                                           target,
    class BlockPos const&                                              origin,
    class Random&                                                      random,
    int                                                                forests,
    class RenderParams&                                                renderParams,
    class WeakRef<class IFeature>                                      tallGrassFeature,
    std::function<class WeakRef<class IFeature>(class Random&)> const& getTreeFeature
);

// symbol: ?_setupForestCount@LegacyTreeFeatureHelpers@@YAXMAEAHAEAVRandom@@@Z
MCAPI void _setupForestCount(float treeCount, int& forests, class Random& random);
// NOLINTEND

}; // namespace LegacyTreeFeatureHelpers
