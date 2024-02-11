#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class FrostWalkerEnchant : public ::Enchant {
public:
    // prevent constructor by default
    FrostWalkerEnchant& operator=(FrostWalkerEnchant const&);
    FrostWalkerEnchant(FrostWalkerEnchant const&);
    FrostWalkerEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1FrostWalkerEnchant@@UEAA@XZ
    virtual ~FrostWalkerEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@FrostWalkerEnchant@@UEBAHH@Z
    virtual int getMinCost(int level) const;

    // vIndex: 3, symbol: ?getMaxCost@FrostWalkerEnchant@@UEBAHH@Z
    virtual int getMaxCost(int level) const;

    // vIndex: 5, symbol: ?getMaxLevel@FrostWalkerEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 12, symbol: ?isTreasureOnly@FrostWalkerEnchant@@UEBA_NXZ
    virtual bool isTreasureOnly() const;

    // NOLINTEND
};
