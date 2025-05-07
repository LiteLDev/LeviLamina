#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ItemStack;
// clang-format on

class VanillaItemTiers {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::vector<::ItemStack> const
    getTierItems(::Item::Tier const& tier, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Item::Tier const& DIAMOND();

    MCNAPI static ::Item::Tier const& GOLD();

    MCNAPI static ::Item::Tier const& IRON();

    MCNAPI static ::Item::Tier const& NETHERITE();

    MCNAPI static ::Item::Tier const& STONE();

    MCNAPI static ::Item::Tier const& WOOD();
    // NOLINTEND
};
