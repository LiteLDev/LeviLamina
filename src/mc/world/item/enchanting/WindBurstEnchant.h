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
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual float getDamageBonus(int, ::Actor const&, ::Actor const&) const /*override*/;

    virtual void doPostItemHurtActor(::Actor& attacker, ::Actor& victim, int enchantLevel) const /*override*/;

    virtual bool isTreasureOnly() const /*override*/;

    virtual bool isDiscoverable() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getMinCost(int level) const;

    MCNAPI int $getMaxCost(int level) const;

    MCNAPI int $getMaxLevel() const;

    MCNAPI float $getDamageBonus(int, ::Actor const&, ::Actor const&) const;

    MCNAPI void $doPostItemHurtActor(::Actor& attacker, ::Actor& victim, int enchantLevel) const;

    MCNAPI bool $isTreasureOnly() const;

    MCNAPI bool $isDiscoverable() const;


    // NOLINTEND
};
