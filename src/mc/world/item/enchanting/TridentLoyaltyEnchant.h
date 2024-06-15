#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentLoyaltyEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentLoyaltyEnchant& operator=(TridentLoyaltyEnchant const&);
    TridentLoyaltyEnchant(TridentLoyaltyEnchant const&);
    TridentLoyaltyEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TridentLoyaltyEnchant@@UEAA@XZ
    virtual ~TridentLoyaltyEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@TridentLoyaltyEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@TridentLoyaltyEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@TridentLoyaltyEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // symbol:
    // ??0TridentLoyaltyEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2H_NH@Z
    MCAPI TridentLoyaltyEnchant(
        ::Enchant::Type      type,
        ::Enchant::Frequency frequency,
        std::string_view     stringId,
        std::string_view     description,
        int                  primarySlots,
        bool                 isLootable,
        int                  secondarySlots
    );

    // NOLINTEND
};
