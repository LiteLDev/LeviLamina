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
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@FishingEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@FishingEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // NOLINTEND
};
