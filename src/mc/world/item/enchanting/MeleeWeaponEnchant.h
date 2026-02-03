#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class MeleeWeaponEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual float getDamageBonus(int level, ::Actor const& target, ::Actor const&) const /*override*/;

    virtual void doPostAttack(::Actor& attacker, ::Actor& victim, int level) const /*override*/;

    virtual bool isMeleeDamageEnchant() const /*override*/;

    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const /*override*/;

    virtual ~MeleeWeaponEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::vector<::Enchant::Type> const& VALID_ENCHANTMENTS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getMinCost(int level) const;

    MCAPI int $getMaxCost(int level) const;

    MCAPI int $getMaxLevel() const;

    MCAPI float $getDamageBonus(int level, ::Actor const& target, ::Actor const&) const;

    MCAPI void $doPostAttack(::Actor& attacker, ::Actor& victim, int level) const;

    MCFOLD bool $isMeleeDamageEnchant() const;

    MCAPI bool $_isValidEnchantmentTypeForCategory(::Enchant::Type type) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
