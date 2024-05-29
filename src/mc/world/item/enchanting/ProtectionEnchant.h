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
    // vIndex: 0, symbol: __gen_??1ProtectionEnchant@@UEAA@XZ
    virtual ~ProtectionEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@ProtectionEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@ProtectionEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@ProtectionEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 6, symbol: ?getDamageProtection@ProtectionEnchant@@UEBAHHAEBVActorDamageSource@@@Z
    virtual int getDamageProtection(int level, class ActorDamageSource const& source) const;

    // vIndex: 9, symbol: ?doPostHurt@ProtectionEnchant@@UEBAXAEAVItemInstance@@AEAVActor@@1H@Z
    virtual void doPostHurt(class ItemInstance& item, class Actor& victim, class Actor& attacker, int level) const;

    // vIndex: 11, symbol: ?isProtectionEnchant@ProtectionEnchant@@UEBA_NXZ
    virtual bool isProtectionEnchant() const;

    // vIndex: 14, symbol: ?_isValidEnchantmentTypeForCategory@ProtectionEnchant@@EEBA_NW4Type@Enchant@@@Z
    virtual bool _isValidEnchantmentTypeForCategory(::Enchant::Type type) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?THORNS_CHANCE_PER_LEVEL@ProtectionEnchant@@0MB
    MCAPI static float const THORNS_CHANCE_PER_LEVEL;

    // symbol:
    // ?VALID_ENCHANTMENTS@ProtectionEnchant@@0V?$vector@W4Type@Enchant@@V?$allocator@W4Type@Enchant@@@std@@@std@@B
    MCAPI static std::vector<::Enchant::Type> const VALID_ENCHANTMENTS;

    // NOLINTEND
};
