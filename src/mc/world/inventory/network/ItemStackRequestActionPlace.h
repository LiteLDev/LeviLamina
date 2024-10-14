#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionPlace : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionPlace& operator=(ItemStackRequestActionPlace const&);
    ItemStackRequestActionPlace(ItemStackRequestActionPlace const&);
    ItemStackRequestActionPlace();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionPlace() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
