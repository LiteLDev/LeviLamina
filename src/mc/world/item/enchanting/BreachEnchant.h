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
    // prevent constructor by default
    BreachEnchant& operator=(BreachEnchant const&);
    BreachEnchant(BreachEnchant const&);
    BreachEnchant();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual int getMinCost(int level) const /*override*/;

    // vIndex: 3
    virtual int getMaxCost(int level) const /*override*/;

    // vIndex: 5
    virtual int getMaxLevel() const /*override*/;

    // vIndex: 8
    virtual float getDamageBonus(int, ::Actor const&, ::Actor const&) const /*override*/;

    // vIndex: 7
    virtual float getAfterBreachArmorFraction(int level, float const armorFraction) const /*override*/;

    // vIndex: 0
    virtual ~BreachEnchant() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getMinCost(int level) const;

    MCAPI int $getMaxCost(int level) const;

    MCAPI int $getMaxLevel() const;

    MCAPI float $getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    MCAPI float $getAfterBreachArmorFraction(int level, float const armorFraction) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
