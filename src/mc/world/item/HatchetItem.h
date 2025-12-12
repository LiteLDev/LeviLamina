#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"

class HatchetItem : public ::DiggerItem {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 55
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 0
    virtual ~HatchetItem() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getEnchantSlot() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
