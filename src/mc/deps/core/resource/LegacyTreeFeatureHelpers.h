#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/WeakRef.h"

namespace LegacyTreeFeatureHelpers {
// NOLINTBEGIN
MCAPI void _placeTrees(
    class IBlockWorldGenAPI&                                           target,
    class BlockPos const&                                              origin,
    class Random&                                                      random,
    int                                                                forests,
    class RenderParams&                                                renderParams,
    class WeakRef<class IFeature>                                      tallGrassFeature,
    std::function<class WeakRef<class IFeature>(class Random&)> const& getTreeFeature
);

MCAPI void _setupForestCount(float treeCount, int& forests, class Random& random);
// NOLINTEND

}; // namespace LegacyTreeFeatureHelpers
