#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class SwiftSneakEnchant : public ::Enchant {
public:
    // prevent constructor by default
    SwiftSneakEnchant& operator=(SwiftSneakEnchant const&);
    SwiftSneakEnchant(SwiftSneakEnchant const&);
    SwiftSneakEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SwiftSneakEnchant();

    // vIndex: 2, symbol: ?getMinCost@SwiftSneakEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@SwiftSneakEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: ?getMaxLevel@SwiftSneakEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // symbol: ?isDiscoverable@SwiftSneakEnchant@@UEBA_NXZ
    MCVAPI bool isDiscoverable() const;

    // symbol: ?isTreasureOnly@SwiftSneakEnchant@@UEBA_NXZ
    MCVAPI bool isTreasureOnly() const;

    // symbol: ?getExtraSneakingMovementFactor@SwiftSneakEnchant@@SAMAEBVActor@@@Z
    MCAPI static float getExtraSneakingMovementFactor(class Actor const&);

    // symbol: ?getLevel@SwiftSneakEnchant@@SAHAEBVActor@@@Z
    MCAPI static int getLevel(class Actor const&);

    // NOLINTEND
};
