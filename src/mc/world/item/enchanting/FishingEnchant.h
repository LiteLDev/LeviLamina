#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class FishingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    FishingEnchant& operator=(FishingEnchant const&);
    FishingEnchant(FishingEnchant const&);
    FishingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FishingEnchant@@UEAA@XZ
    virtual ~FishingEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@FishingEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@FishingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getMaxLevel@FishingEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // NOLINTEND
};
