#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class TridentChannelingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    TridentChannelingEnchant& operator=(TridentChannelingEnchant const&);
    TridentChannelingEnchant(TridentChannelingEnchant const&);
    TridentChannelingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TridentChannelingEnchant@@UEAA@XZ
    virtual ~TridentChannelingEnchant() = default;

    // vIndex: 1, symbol: ?isCompatibleWith@TridentChannelingEnchant@@UEBA_NW4Type@Enchant@@@Z
    virtual bool isCompatibleWith(::Enchant::Type type) const;

    // vIndex: 2, symbol: ?getMinCost@TridentChannelingEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@TridentChannelingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@TridentChannelingEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // symbol:
    // ??0TridentChannelingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2H_NH@Z
    MCAPI TridentChannelingEnchant(
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
