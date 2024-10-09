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
    // vIndex: 0
    virtual ~BreachEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 7
    virtual float getAfterBreachArmorFraction(int level, float armorFraction) const;

    // vIndex: 8
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // NOLINTEND
};
