#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ItemStack;
struct ItemTier;
// clang-format on

namespace VanillaItemTiers {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::ItemStack> getTierItems(::ItemTier const& tier, ::BaseGameVersion const& baseGameVersion);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::ItemTier const& COPPER();

MCAPI ::ItemTier const& DIAMOND();

MCAPI ::ItemTier const& GOLD();

MCAPI ::ItemTier const& IRON();

MCAPI ::ItemTier const& NETHERITE();

MCAPI ::ItemTier const& STONE();

MCAPI ::ItemTier const& WOOD();
// NOLINTEND

} // namespace VanillaItemTiers
