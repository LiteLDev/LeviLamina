#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class LootEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getMinCost(int level) const /*override*/;

    virtual int getMaxCost(int level) const /*override*/;

    virtual int getMaxLevel() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getMinCost(int level) const;

#ifdef LL_PLAT_S
    MCAPI int $getMaxCost(int level) const;
#else // LL_PLAT_C
    MCFOLD int $getMaxCost(int level) const;
#endif

    MCFOLD int $getMaxLevel() const;


    // NOLINTEND
};
