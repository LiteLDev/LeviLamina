#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class EntityContext;
class ItemStack;
namespace Interactions::Mining { struct FinishMiningDependencies; }
// clang-format on

namespace Interactions::Mining {
// functions
// NOLINTBEGIN
#ifdef LL_PLAT_S
MCNAPI void doFinishMiningHeldItemTypeEffects(
    ::Actor&          actor,
    ::ItemStack&      item,
    ::Block const&    minedBlock,
    ::BlockPos const& minedPosition
);
#endif

MCNAPI void doFinishMiningHeldItemTypeEffects(
    ::Interactions::Mining::FinishMiningDependencies& dependencies,
    ::EntityContext&                                  actor,
    ::ItemStack&                                      item,
    ::Block const&                                    minedBlock
);
// NOLINTEND

} // namespace Interactions::Mining
