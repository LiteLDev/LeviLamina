#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class IBlockWorldGenAPI;
// clang-format on

namespace SpeleothemUtils {
// functions
// NOLINTBEGIN
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
