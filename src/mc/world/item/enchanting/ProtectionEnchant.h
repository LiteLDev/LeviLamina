#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class ProtectionEnchant : public ::Enchant {
public:
    // prevent constructor by default
    ProtectionEnchant& operator=(ProtectionEnchant const&);
    ProtectionEnchant(ProtectionEnchant const&);
    ProtectionEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ProtectionEnchant();

    // vIndex: 2, symbol: ?getMinCost@ProtectionEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@ProtectionEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getMaxLevel@ProtectionEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 6, symbol: ?getDamageProtection@ProtectionEnchant@@UEBAHHAEBVActorDamageSource@@@Z
    virtual int getDamageProtection(int, class ActorDamageSource const&) const;

    // vIndex: 9, symbol: ?doPostHurt@ProtectionEnchant@@UEBAXAEAVItemInstance@@AEAVActor@@1H@Z
    virtual void doPostHurt(class ItemInstance&, class Actor&, class Actor&, int) const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@ProtectionEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type) const;

    // symbol: ?isProtectionEnchant@ProtectionEnchant@@UEBA_NXZ
    MCVAPI bool isProtectionEnchant() const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?THORNS_CHANCE_PER_LEVEL@ProtectionEnchant@@0MB
    MCAPI static float const THORNS_CHANCE_PER_LEVEL;

    // symbol:
    // ?VALID_ENCHANTMENTS@ProtectionEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $THORNS_CHANCE_PER_LEVEL() { return THORNS_CHANCE_PER_LEVEL; }

    static auto& $VALID_ENCHANTMENTS() { return VALID_ENCHANTMENTS; }

    // NOLINTEND
};
