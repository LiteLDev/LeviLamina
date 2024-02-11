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
    // vIndex: 0, symbol: __gen_??1CurseBindingEnchant@@UEAA@XZ
    virtual ~CurseBindingEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@CurseBindingEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@CurseBindingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 12, symbol: ?isTreasureOnly@CurseBindingEnchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // symbol:
    // ??0CurseBindingEnchant@@QEAA@W4Type@Enchant@@W4Frequency@2@V?$basic_string_view@DU?$char_traits@D@std@@@std@@2H_NH@Z
    MCAPI CurseBindingEnchant(
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
