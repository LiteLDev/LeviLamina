#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class LootEnchant : public ::Enchant {
public:
    // prevent constructor by default
    LootEnchant& operator=(LootEnchant const&);
    LootEnchant(LootEnchant const&);
    LootEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getMinCost@LootEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@LootEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 5, symbol: ?getMaxLevel@LootEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // symbol:
    // ??0LootEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH@Z
    MCAPI LootEnchant(::Enchant::Type, ::Enchant::Frequency, std::string_view, std::string_view, int, int);

    // NOLINTEND
};
