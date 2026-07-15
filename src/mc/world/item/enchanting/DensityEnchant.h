#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class DensityEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;

    virtual float getDamageBonus(int, ::Actor const&, ::Actor const&) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
