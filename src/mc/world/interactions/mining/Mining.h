#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class ItemStack;
// clang-format on

namespace Interactions::Mining {
// functions
// NOLINTBEGIN
MCAPI void doFinishMiningHeldItemTypeEffects(
    ::Actor&          actor,
    ::ItemStack&      item,
    ::Block const&    minedBlock,
    ::BlockPos const& minedPosition
);
// NOLINTEND

} // namespace Interactions::Mining
