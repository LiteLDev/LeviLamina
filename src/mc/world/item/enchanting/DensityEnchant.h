#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class DensityEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual float getDamageBonus(int level, ::Actor const&, ::Actor const& attacker) const /*override*/;

    virtual ~DensityEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getMinCost(int level) const;

    MCFOLD int $getMaxCost(int level) const;

    MCFOLD int $getMaxLevel() const;

    MCAPI float $getDamageBonus(int level, ::Actor const&, ::Actor const& attacker) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
