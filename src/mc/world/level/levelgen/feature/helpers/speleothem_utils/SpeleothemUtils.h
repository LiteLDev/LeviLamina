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
class Random;
namespace SpeleothemUtils { struct SpeleothemBasePos; }
// clang-format on

namespace SpeleothemUtils {
// functions
// NOLINTBEGIN
MCAPI void buildBaseToTipColumn(
    ::IBlockWorldGenAPI&  target,
    ::BlockPos const&     basePos,
    uchar                 direction,
    int                   length,
    bool                  mergeTips,
    ::HashedString const& pointedBlock
);

MCAPI bool canBeAdjacentToWater(::IBlockWorldGenAPI& target, ::BlockPos const& pos);

MCAPI bool canPlacePool(
    ::IBlockWorldGenAPI&  target,
    ::BlockPos const&     pos,
    ::HashedString const& baseBlock,
    ::HashedString const& pointedBlock
);

MCAPI ::Block const&
getPlacementBlock(uchar direction, ::SpeleothemThickness const& thickness, ::HashedString const& pointedBlock);

MCAPI ::std::optional<::SpeleothemUtils::SpeleothemBasePos> getSpeleothemBasePos(
    ::IBlockWorldGenAPI&                                                 target,
    ::BlockPos const&                                                    pos,
    ::Random&                                                            random,
    ::HashedString const&                                                baseBlock,
    ::std::vector<::std::reference_wrapper<::HashedString const>> const& replaceableBlocks
);

MCAPI float getSpeleothemHeight(float xzDistanceFromCenter, float speleothemRadius, float scale, float bluntness);

MCAPI bool isBaseOrLava(
    ::IBlockWorldGenAPI const&                                           target,
    ::BlockPos const&                                                    pos,
    ::HashedString const&                                                baseBlock,
    ::std::vector<::std::reference_wrapper<::HashedString const>> const& replaceableBlocks
);

MCAPI bool isCircleMostlyEmbeddedInStone(::IBlockWorldGenAPI& target, ::BlockPos const& center, int xzRadius);

MCAPI bool isEmptyOrWater(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI bool isEmptyOrWaterOrLava(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI bool isLava(::IBlockWorldGenAPI const& target, ::BlockPos const& pos);

MCAPI bool placeBaseBlockIfPossible(
    ::IBlockWorldGenAPI&                                                 target,
    ::BlockPos const&                                                    pos,
    ::HashedString const&                                                baseBlock,
    ::std::vector<::std::reference_wrapper<::HashedString const>> const& replaceableBlocks
);
// NOLINTEND

} // namespace SpeleothemUtils
