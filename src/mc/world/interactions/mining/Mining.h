#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class EntityContext;
class ItemStack;
namespace Interactions::Mining { struct FinishMiningDependencies; }
// clang-format on

namespace Interactions::Mining {
// functions
// NOLINTBEGIN
MCNAPI void doFinishMiningHeldItemTypeEffects(
    ::Interactions::Mining::FinishMiningDependencies& dependencies,
    ::EntityContext&                                  actor,
    ::ItemStack&                                      item,
    ::Block const&                                    minedBlock
);
// NOLINTEND

} // namespace Interactions::Mining
