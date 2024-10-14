#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class VanillaItemTiers {
public:
    // prevent constructor by default
    VanillaItemTiers& operator=(VanillaItemTiers const&);
    VanillaItemTiers(VanillaItemTiers const&);
    VanillaItemTiers();

public:
    // NOLINTBEGIN
    MCAPI static std::vector<class ItemStack> const
    getTierItems(class Item::Tier const& tier, class BaseGameVersion const& baseGameVersion);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class Item::Tier const& DIAMOND();

    MCAPI static class Item::Tier const& GOLD();

    MCAPI static class Item::Tier const& IRON();

    MCAPI static class Item::Tier const& NETHERITE();

    MCAPI static class Item::Tier const& STONE();

    MCAPI static class Item::Tier const& WOOD();

    // NOLINTEND
};
