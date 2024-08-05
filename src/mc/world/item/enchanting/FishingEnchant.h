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
    // vIndex: 0
    virtual ~FishingEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // NOLINTEND
};
