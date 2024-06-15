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
    // vIndex: 0, symbol: __gen_??1DensityEnchant@@UEAA@XZ
    virtual ~DensityEnchant() = default;

    // vIndex: 2, symbol: ?getMinCost@DensityEnchant@@UEBAHH@Z
    virtual int getMinCost(int) const;

    // vIndex: 3, symbol: ?getMaxCost@DensityEnchant@@UEBAHH@Z
    virtual int getMaxCost(int) const;

    // vIndex: 5, symbol: ?getMaxLevel@DensityEnchant@@UEBAHXZ
    virtual int getMaxLevel() const;

    // vIndex: 8, symbol: ?getDamageBonus@DensityEnchant@@UEBAMHAEBVActor@@0@Z
    virtual float getDamageBonus(int, class Actor const&, class Actor const&) const;

    // NOLINTEND
};
