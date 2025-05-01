#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/enchanting/Enchant.h"

class CurseBindingEnchant : public ::Enchant {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual int getMinCost(int level) const /*override*/;

    // vIndex: 3
    virtual int getMaxCost(int level) const /*override*/;

    // vIndex: 14
    virtual bool isTreasureOnly() const /*override*/;

    // vIndex: 0
    virtual ~CurseBindingEnchant() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getMinCost(int level) const;

    MCNAPI int $getMaxCost(int level) const;

    MCNAPI bool $isTreasureOnly() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
