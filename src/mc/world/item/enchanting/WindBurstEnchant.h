#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class WindBurstEnchant : public ::Enchant {
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

    // vIndex: 10
    virtual void doPostItemHurtActor(::Actor& attacker, ::Actor&, int enchantLevel) const /*override*/;

    // vIndex: 14
    virtual bool isTreasureOnly() const /*override*/;

    // vIndex: 15
    virtual bool isDiscoverable() const /*override*/;

    // vIndex: 0
    virtual ~WindBurstEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getMinCost(int level) const;

    MCFOLD int $getMaxCost(int level) const;

    MCFOLD int $getMaxLevel() const;

    MCFOLD float $getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    MCAPI void $doPostItemHurtActor(::Actor& attacker, ::Actor&, int enchantLevel) const;

    MCFOLD bool $isTreasureOnly() const;

    MCFOLD bool $isDiscoverable() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
