#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentChannelingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentChannelingEnchant& operator=(TridentChannelingEnchant const&) = delete;
    TridentChannelingEnchant(TridentChannelingEnchant const&)            = delete;
    TridentChannelingEnchant()                                           = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isCompatibleWith@TridentChannelingEnchant@@UEBA_NW4Type@Enchant@@@Z
    virtual bool isCompatibleWith(::Enchant::Type) const;

    // vIndex: 2, symbol: ?getMinCost@TridentChannelingEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@TridentChannelingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 5, symbol: ?getMaxLevel@TridentChannelingEnchant@@UEBAHXZ
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
    // ??0TridentChannelingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2H_NH@Z
    MCAPI
    TridentChannelingEnchant(::Enchant::Type, ::Enchant::Frequency, std::string_view, std::string_view, int, bool, int);

    // NOLINTEND
};
