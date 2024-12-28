#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockWorldGenAPI;
class IFeature;
class Random;
class RenderParams;
// clang-format on

namespace LegacyTreeFeatureHelpers {
// functions
// NOLINTBEGIN
MCAPI void _placeTrees(
    ::IBlockWorldGenAPI&                                     target,
    ::BlockPos const&                                        origin,
    ::Random&                                                random,
    int                                                      forests,
    ::RenderParams&                                          renderParams,
    ::WeakRef<::IFeature>                                    tallGrassFeature,
    ::std::function<::WeakRef<::IFeature>(::Random&)> const& getTreeFeature
);
// NOLINTEND

} // namespace LegacyTreeFeatureHelpers
