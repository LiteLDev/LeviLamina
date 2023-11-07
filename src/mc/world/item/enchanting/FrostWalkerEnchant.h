#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class FrostWalkerEnchant : public ::Enchant {
public:
    // prevent constructor by default
    FrostWalkerEnchant& operator=(FrostWalkerEnchant const&);
    FrostWalkerEnchant(FrostWalkerEnchant const&);
    FrostWalkerEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FrostWalkerEnchant@@UEAA@XZ
    virtual ~FrostWalkerEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@FrostWalkerEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@FrostWalkerEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getMaxLevel@FrostWalkerEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // symbol: ?isTreasureOnly@FrostWalkerEnchant@@UEBA_NXZ
    MCVAPI bool isTreasureOnly() const;

    // NOLINTEND
};
