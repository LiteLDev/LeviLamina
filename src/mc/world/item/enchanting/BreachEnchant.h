#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class BreachEnchant : public ::Enchant {
public:
    // prevent constructor by default
    BreachEnchant& operator=(BreachEnchant const&);
    BreachEnchant(BreachEnchant const&);
    BreachEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BreachEnchant@@UEAA@XZ
    virtual ~BreachEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@BreachEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@BreachEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 5, symbol: ?getMaxLevel@BreachEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 7, symbol: ?getAfterBreachArmorFraction@BreachEnchant@@UEBAMHM@Z
    virtual float getAfterBreachArmorFraction(int, float) const;

    // vIndex: 8, symbol: ?getDamageBonus@BreachEnchant@@UEBAMHAEBVActor@@0@Z
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // NOLINTEND
};
