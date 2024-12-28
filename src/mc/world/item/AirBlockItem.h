#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class AirBlockItem : public ::Item {
public:
    // prevent constructor by default
    AirBlockItem& operator=(AirBlockItem const&);
    AirBlockItem(AirBlockItem const&);
    AirBlockItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AirBlockItem() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
