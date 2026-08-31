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
MCAPI void buildBaseToTipColumn(
    ::IBlockWorldGenAPI&  target,
    ::BlockPos const&     basePos,
    uchar const           direction,
    int const             length,
    bool const            mergeTips,
    ::HashedString const& pointedBlock
);

MCAPI ::Block const&
getPlacementBlock(uchar const direction, ::SpeleothemThickness const& thickness, ::HashedString const& pointedBlock);

MCAPI float getSpeleothemHeight(float xzDistanceFromCenter, float speleothemRadius, float scale, float bluntness);

MCAPI bool isBaseOrLava(
    ::IBlockWorldGenAPI const&                                           target,
    ::BlockPos const&                                                    pos,
    ::HashedString const&                                                baseBlock,
    ::std::vector<::std::reference_wrapper<::HashedString const>> const& replaceableBlocks
);

MCAPI bool isCircleMostlyEmbeddedInStone(::IBlockWorldGenAPI& target, ::BlockPos const& center, int xzRadius);
// NOLINTEND

} // namespace SpeleothemUtils
