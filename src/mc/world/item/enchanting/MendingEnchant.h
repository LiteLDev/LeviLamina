#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class MendingEnchant : public ::Enchant {
public:
    // prevent constructor by default
    MendingEnchant& operator=(MendingEnchant const&);
    MendingEnchant(MendingEnchant const&);
    MendingEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MendingEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 14
    virtual bool isTreasureOnly() const;

    // NOLINTEND
};
