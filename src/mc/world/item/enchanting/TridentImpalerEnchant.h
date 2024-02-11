#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentImpalerEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentImpalerEnchant& operator=(TridentImpalerEnchant const&);
    TridentImpalerEnchant(TridentImpalerEnchant const&);
    TridentImpalerEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TridentImpalerEnchant@@UEAA@XZ
    virtual ~TridentImpalerEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@TridentImpalerEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@TridentImpalerEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@TridentImpalerEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 7, symbol: ?getDamageBonus@TridentImpalerEnchant@@UEBAMHAEBVActor@@@Z
    virtual float getDamageBonus(int level, class Actor const& target) const;

    // NOLINTEND
};
