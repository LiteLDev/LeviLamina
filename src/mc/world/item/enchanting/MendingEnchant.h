#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class MendingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    MendingEnchant& operator=(MendingEnchant const&);
    MendingEnchant(MendingEnchant const&);
    MendingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MendingEnchant@@UEAA@XZ
    virtual ~MendingEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@MendingEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@MendingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@MendingEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 12, symbol: ?isTreasureOnly@MendingEnchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // NOLINTEND
};
