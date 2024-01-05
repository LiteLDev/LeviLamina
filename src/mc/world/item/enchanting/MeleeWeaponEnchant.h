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

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getMaxLevel@MeleeWeaponEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 7, symbol: ?getDamageBonus@MeleeWeaponEnchant@@UEBAMHAEBVActor@@@Z
    virtual float getDamageBonus(int level, class Actor const& target) const;

    // vIndex: 8, symbol: ?doPostAttack@MeleeWeaponEnchant@@UEBAXAEAVActor@@0H@Z
    virtual void doPostAttack(class Actor& attacker, class Actor& victim, int level) const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@MeleeWeaponEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // symbol: ?isMeleeDamageEnchant@MeleeWeaponEnchant@@UEBA_NXZ
    MCVAPI bool isMeleeDamageEnchant() const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?VALID_ENCHANTMENTS@MeleeWeaponEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $VALID_ENCHANTMENTS() { return VALID_ENCHANTMENTS; }

    // NOLINTEND
};
