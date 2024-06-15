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
    // vIndex: 0, symbol: __gen_??1SwiftSneakEnchant@@UEAA@XZ
    virtual ~SwiftSneakEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@SwiftSneakEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@SwiftSneakEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@SwiftSneakEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 14, symbol: ?isTreasureOnly@SwiftSneakEnchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // vIndex: 15, symbol: ?isDiscoverable@SwiftSneakEnchant@@UEBA_NXZ
    virtual bool isDiscoverable() const;

    // symbol:
    // ??0SwiftSneakEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2HH@Z
    MCAPI SwiftSneakEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        int                  secondarySlots
    );

    // symbol: ?getExtraSneakingMovementFactor@SwiftSneakEnchant@@SAMAEBVActor@@@Z
    MCAPI static float getExtraSneakingMovementFactor(class Actor const& entity);

    // symbol: ?getLevel@SwiftSneakEnchant@@SAHAEBVActor@@@Z
    MCAPI static int getLevel(class Actor const& entity);

    // NOLINTEND
};
