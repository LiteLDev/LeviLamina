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
    // vIndex: 0, symbol: __gen_??1MeleeWeaponEnchant@@UEAA@XZ
    virtual ~MeleeWeaponEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@MeleeWeaponEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@MeleeWeaponEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@MeleeWeaponEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 8, symbol: ?getDamageBonus@MeleeWeaponEnchant@@UEBAMHAEBVActor@@0@Z
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // vIndex: 9, symbol: ?doPostAttack@MeleeWeaponEnchant@@UEBAXAEAVActor@@0H@Z
    virtual void doPostAttack(class Actor& attacker, class Actor& victim, int level) const;

    // vIndex: 12, symbol: ?isMeleeDamageEnchant@MeleeWeaponEnchant@@UEBA_NXZ
    virtual bool isMeleeDamageEnchant() const;

    // vIndex: 16, symbol: ?_isValidEnchantmentTypeForCategory@MeleeWeaponEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // symbol:
    // ??0MeleeWeaponEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH@Z
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
    // symbol:
    // ?VALID_ENCHANTMENTS@MeleeWeaponEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND
};
