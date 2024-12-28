#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionPlace : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionPlace& operator=(ItemStackRequestActionPlace const&);
    ItemStackRequestActionPlace(ItemStackRequestActionPlace const&);
    ItemStackRequestActionPlace();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionPlace() /*override*/;
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
