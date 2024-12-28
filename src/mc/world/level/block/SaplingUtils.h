#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Random;
// clang-format on

namespace SaplingUtils {
// functions
// NOLINTBEGIN
MCAPI bool isNearFlowerBlock(::BlockSource& region, ::BlockPos const& pos);

MCAPI bool shouldTreeContainBeehive(::BlockSource& region, ::BlockPos const& pos, ::Random& random);
// NOLINTEND

} // namespace SaplingUtils
