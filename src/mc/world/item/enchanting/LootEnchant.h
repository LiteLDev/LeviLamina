#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class LootEnchant : public ::Enchant {
public:
    // prevent constructor by default
    LootEnchant& operator=(LootEnchant const&);
    LootEnchant(LootEnchant const&);
    LootEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LootEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // NOLINTEND
};
