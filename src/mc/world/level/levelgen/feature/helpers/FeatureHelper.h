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
MCNAPI ::gsl::not_null<::Block const*> makeCompareBlock(::Block const& block);

MCNAPI ::RenderParams
makeFeatureRenderParams(::BlockSource& source, ::BlockPos const& pos, ::MolangVariableMap& molangVariables);

MCNAPI bool passesAllowList(
    ::IBlockWorldGenAPI const&              target,
    ::BlockPos const&                       pos,
    ::std::vector<::BlockDescriptor> const& allowList
);

MCNAPI ::std::optional<::BlockPos> placeBlock(::IBlockWorldGenAPI& target, ::BlockPos const& pos, ::Block const& block);

MCNAPI ::FeatureHelper::PlaceFeatureResult placeFeature(
    ::IFeature const&                 feature,
    ::BlockSource&                    source,
    ::BlockPos const&                 pos,
    ::Random&                         random,
    ::FeaturePlacementFailureLogProxy logger
);

MCNAPI ::FeatureHelper::PlaceFeatureResult
placeFeatureRule(::BiomeDecorationFeature const& rule, ::BlockSource& source, ::BlockPos const& pos, ::Random& random);
// NOLINTEND

} // namespace FeatureHelper
