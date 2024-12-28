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
    // prevent constructor by default
    VanillaItemTiers& operator=(VanillaItemTiers const&);
    VanillaItemTiers(VanillaItemTiers const&);
    VanillaItemTiers();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::vector<::ItemStack> const
    getTierItems(::Item::Tier const& tier, ::BaseGameVersion const& baseGameVersion);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Item::Tier const& DIAMOND();

    MCAPI static ::Item::Tier const& GOLD();

    MCAPI static ::Item::Tier const& IRON();

    MCAPI static ::Item::Tier const& NETHERITE();

    MCAPI static ::Item::Tier const& STONE();

    MCAPI static ::Item::Tier const& WOOD();
    // NOLINTEND
};
