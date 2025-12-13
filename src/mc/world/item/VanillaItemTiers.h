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
MCNAPI ::std::vector<::ItemStack> getTierItems(::ItemTier const& tier, ::BaseGameVersion const& baseGameVersion);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::ItemTier const& COPPER();

MCNAPI ::ItemTier const& DIAMOND();

MCNAPI ::ItemTier const& GOLD();

MCNAPI ::ItemTier const& IRON();

MCNAPI ::ItemTier const& NETHERITE();

MCNAPI ::ItemTier const& STONE();

MCNAPI ::ItemTier const& WOOD();
// NOLINTEND

} // namespace VanillaItemTiers
