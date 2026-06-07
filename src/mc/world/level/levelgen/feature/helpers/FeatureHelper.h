#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/helpers/feature_helper/PlaceFeatureResult.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockDescriptor;
class BlockPos;
class BlockSource;
class FeaturePlacementFailureLogProxy;
class IBlockWorldGenAPI;
class IFeature;
class MolangVariableMap;
class Random;
class RenderParams;
struct BiomeDecorationFeature;
// clang-format on

namespace FeatureHelper {
// functions
// NOLINTBEGIN
MCAPI bool isEmptyBlock(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI ::RenderParams
makeFeatureRenderParams(::BlockSource& source, ::BlockPos const& pos, ::MolangVariableMap& molangVariables);

MCAPI bool passesAllowList(::Block const& block, ::std::vector<::BlockDescriptor> const& allowList);

MCAPI bool passesAllowList(
    ::IBlockWorldGenAPI const&              target,
    ::BlockPos const&                       pos,
    ::std::vector<::BlockDescriptor> const& allowList
);

MCAPI ::std::optional<::BlockPos> placeBlock(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block);

MCAPI ::FeatureHelper::PlaceFeatureResult placeFeature(
    ::IFeature const&                 feature,
    ::BlockSource&                    source,
    ::BlockPos const&                 pos,
    ::Random&                         random,
    ::FeaturePlacementFailureLogProxy logger
);

MCAPI ::FeatureHelper::PlaceFeatureResult
placeFeatureRule(::BiomeDecorationFeature const& rule, ::BlockSource& source, ::BlockPos const& pos, ::Random& random);
// NOLINTEND

} // namespace FeatureHelper
