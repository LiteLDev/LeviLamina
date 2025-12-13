#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class BreachEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual float getDamageBonus(int, ::Actor const&, ::Actor const&) const /*override*/;

    virtual float getAfterBreachArmorFraction(int level, float const armorFraction) const /*override*/;

    virtual ~BreachEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getMinCost(int level) const;

    MCFOLD int $getMaxCost(int level) const;

    MCFOLD int $getMaxLevel() const;

    MCFOLD float $getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    MCAPI float $getAfterBreachArmorFraction(int level, float const armorFraction) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
