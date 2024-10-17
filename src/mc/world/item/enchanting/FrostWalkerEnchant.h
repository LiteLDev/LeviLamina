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
    // vIndex: 0
    virtual ~FrostWalkerEnchant() = default;

    // vIndex: 2
    virtual int getMinCost(int level) const;

    // vIndex: 3
    virtual int getMaxCost(int level) const;

    // vIndex: 5
    virtual int getMaxLevel() const;

    // vIndex: 14
    virtual bool isTreasureOnly() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI int getMaxCost$(int level) const;

    MCAPI int getMaxLevel$() const;

    MCAPI int getMinCost$(int level) const;

    MCAPI bool isTreasureOnly$() const;

    // NOLINTEND
};
