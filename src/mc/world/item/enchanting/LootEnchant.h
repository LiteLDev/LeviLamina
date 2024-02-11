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
    // vIndex: 0, symbol: __gen_??1LootEnchant@@UEAA@XZ
    virtual ~LootEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@LootEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@LootEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@LootEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // NOLINTEND
};
