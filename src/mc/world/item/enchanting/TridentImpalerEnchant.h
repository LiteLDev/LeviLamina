#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentImpalerEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentImpalerEnchant& operator=(TridentImpalerEnchant const&);
    TridentImpalerEnchant(TridentImpalerEnchant const&);
    TridentImpalerEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TridentImpalerEnchant@@UEAA@XZ
    virtual ~TridentImpalerEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@TridentImpalerEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@TridentImpalerEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@TridentImpalerEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 8, symbol: ?getDamageBonus@TridentImpalerEnchant@@UEBAMHAEBVActor@@0@Z
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // symbol:
    // ??0TridentImpalerEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2H_NH@Z
    MCAPI TridentImpalerEnchant(
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
