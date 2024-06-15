#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class WindBurstEnchant : public ::Enchant {
public:
    // prevent constructor by default
    WindBurstEnchant& operator=(WindBurstEnchant const&);
    WindBurstEnchant(WindBurstEnchant const&);
    WindBurstEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WindBurstEnchant@@UEAA@XZ
    virtual ~WindBurstEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@WindBurstEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@WindBurstEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 5, symbol: ?getMaxLevel@WindBurstEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 8, symbol: ?getDamageBonus@WindBurstEnchant@@UEBAMHAEBVActor@@0@Z
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // vIndex: 10, symbol: ?doPostItemHurtActor@WindBurstEnchant@@UEBAXAEAVActor@@0H@Z
    virtual void doPostItemHurtActor(class Actor&, class Actor&, int) const;

    // vIndex: 14, symbol: ?isTreasureOnly@WindBurstEnchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // vIndex: 15, symbol: ?isDiscoverable@WindBurstEnchant@@UEBA_NXZ
    virtual bool isDiscoverable() const;

    // symbol:
    // ??0WindBurstEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH@Z
    MCAPI WindBurstEnchant(::Enchant::Type, ::Enchant::Frequency, std::string_view, std::string_view, int, int);

    // NOLINTEND
};
