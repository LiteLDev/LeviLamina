#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Random;
// clang-format on

namespace SaplingUtils {
// functions
// NOLINTBEGIN
MCAPI void setBlockNoUpdate(
    ::BlockSource&                     region,
    ::BlockPos const&                  pos,
    ::std::optional<::BlockPos> const& quadrupleSaplingOffset,
    ::Block const&                     block
);

MCAPI bool tryAgeSapling(::BlockSource& region, ::BlockPos const& pos);

MCAPI bool tryPlaceFeature(
    ::BlockSource&                     region,
    ::BlockPos const&                  pos,
    ::std::optional<::BlockPos> const& quadrupleSaplingOffset,
    ::std::string const&               featureName,
    ::Random&                          random
);

MCAPI bool tryPlaceTree(
    ::BlockSource&                        region,
    ::BlockPos const&                     pos,
    ::Random&                             random,
    ::std::optional<::std::string> const& singleSaplingTree,
    ::std::optional<::std::string> const& singleSaplingTreeWithBeehive,
    ::std::optional<::std::string> const& quadrupleSaplingTree,
    ::std::optional<::BlockPos> const&    quadrupleSaplingOffset
);
// NOLINTEND

} // namespace SaplingUtils
