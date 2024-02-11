#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CurseVanishingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    CurseVanishingEnchant& operator=(CurseVanishingEnchant const&);
    CurseVanishingEnchant(CurseVanishingEnchant const&);
    CurseVanishingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CurseVanishingEnchant@@UEAA@XZ
    virtual ~CurseVanishingEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@CurseVanishingEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@CurseVanishingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 12, symbol: ?isTreasureOnly@CurseVanishingEnchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // symbol:
    // ??0CurseVanishingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2H_NH@Z
    MCAPI CurseVanishingEnchant(
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
