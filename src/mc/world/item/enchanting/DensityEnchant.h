#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class DensityEnchant : public ::Enchant {
public:
    // prevent constructor by default
    DensityEnchant& operator=(DensityEnchant const&);
    DensityEnchant(DensityEnchant const&);
    DensityEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DensityEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int) const;

    // vIndex: 3
    virtual int getMaxCost(int) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 8
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // NOLINTEND
};
