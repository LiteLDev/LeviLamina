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
    // prevent constructor by default
    DensityEnchant& operator=(DensityEnchant const&);
    DensityEnchant(DensityEnchant const&);
    DensityEnchant();

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
    virtual float getDamageBonus(int level, ::Actor const&, ::Actor const& attacker) const /*override*/;

    // vIndex: 0
    virtual ~DensityEnchant() /*override*/;
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

    MCAPI float $getDamageBonus(int level, ::Actor const&, ::Actor const& attacker) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
