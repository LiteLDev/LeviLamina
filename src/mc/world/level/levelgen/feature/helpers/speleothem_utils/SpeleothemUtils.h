#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/SpeleothemThickness.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class HashedString;
class IBlockWorldGenAPI;
// clang-format on

namespace SpeleothemUtils {
// functions
// NOLINTBEGIN
MCNAPI void buildBaseToTipColumn(
    ::IBlockWorldGenAPI&                                  target,
    ::BlockPos const&                                     basePos,
    uchar const                                           direction,
    int const                                             length,
    bool const                                            mergeTips,
    ::HashedString const&                                 speleothemBlock,
    ::std::function<::Block const&(::Block const&)> const baseBlockTransformer
);

MCNAPI ::Block const&
getPlacementBlock(uchar const direction, ::SpeleothemThickness const& thickness, ::HashedString const& speleothemBlock);

MCNAPI float getSpeleothemHeight(float xzDistanceFromCenter, float speleothemRadius, float scale, float bluntness);

MCNAPI bool isBaseOrLava(
    ::IBlockWorldGenAPI const&                                           target,
    ::BlockPos const&                                                    pos,
    ::HashedString const&                                                baseBlock,
    ::std::vector<::std::reference_wrapper<::HashedString const>> const& replaceableBlocks
);

MCNAPI bool isCircleMostlyEmbeddedInTerrain(::IBlockWorldGenAPI& target, ::BlockPos const& center, int xzRadius);

MCNAPI bool placeBaseBlockIfPossible(
    ::IBlockWorldGenAPI&                                                 target,
    ::BlockPos const&                                                    pos,
    ::HashedString const&                                                baseBlock,
    ::std::vector<::std::reference_wrapper<::HashedString const>> const& replaceableBlocks
);
// NOLINTEND

} // namespace SpeleothemUtils
