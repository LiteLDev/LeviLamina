#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CurseBindingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    CurseBindingEnchant& operator=(CurseBindingEnchant const&);
    CurseBindingEnchant(CurseBindingEnchant const&);
    CurseBindingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?getMinCost@CurseBindingEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@CurseBindingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // symbol: ?isTreasureOnly@CurseBindingEnchant@@UEBA_NXZ
    MCVAPI bool isTreasureOnly() const;

    // NOLINTEND
};
