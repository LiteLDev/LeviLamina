#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentLoyaltyEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentLoyaltyEnchant& operator=(TridentLoyaltyEnchant const&);
    TridentLoyaltyEnchant(TridentLoyaltyEnchant const&);
    TridentLoyaltyEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TridentLoyaltyEnchant@@UEAA@XZ
    virtual ~TridentLoyaltyEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@TridentLoyaltyEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@TridentLoyaltyEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@TridentLoyaltyEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // NOLINTEND
};
