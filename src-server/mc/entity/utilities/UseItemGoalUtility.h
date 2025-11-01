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
MCNAPI void finishUsingItem(::Mob& mob, ::Tick& finishUsingItemTick);

MCNAPI bool startUsingItem(::Mob& mob, ::ItemStack const& item, ::Tick& finishUsingItemTick);
// NOLINTEND

}
