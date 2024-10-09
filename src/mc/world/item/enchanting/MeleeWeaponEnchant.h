#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class MeleeWeaponEnchant : public ::Enchant {
public:
    // prevent constructor by default
    MeleeWeaponEnchant& operator=(MeleeWeaponEnchant const&);
    MeleeWeaponEnchant(MeleeWeaponEnchant const&);
    MeleeWeaponEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MeleeWeaponEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 8
    virtual float getDamageBonus(int level, class Actor const& target, class Actor const&) const;

    // vIndex: 9
    virtual void doPostAttack(class Actor& attacker, class Actor& victim, int level) const;

    // vIndex: 12
    virtual bool isMeleeDamageEnchant() const;

    // vIndex: 16
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    MCAPI MeleeWeaponEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND
};
