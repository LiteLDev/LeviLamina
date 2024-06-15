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

    // vIndex: 14, symbol: ?isTreasureOnly@CurseBindingEnchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // NOLINTEND
};
