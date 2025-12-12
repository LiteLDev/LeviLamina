#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"

class HatchetItem : public ::DiggerItem {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getEnchantSlot() const /*override*/;

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
