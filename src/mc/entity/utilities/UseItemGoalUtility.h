#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Mob;
struct Tick;
// clang-format on

namespace UseItemGoalUtility {
// functions
// NOLINTBEGIN
MCAPI void finishUsingItem(::Mob& mob, ::Tick& finishUsingItemTick);

MCAPI bool isUsingItem(::Mob const& mob);

MCAPI void setUsingItem(::Mob& mob, bool isUsingItem);

MCAPI bool startUsingItem(::Mob& mob, ::ItemStack const& item, ::Tick& finishUsingItemTick);
// NOLINTEND

} // namespace UseItemGoalUtility
