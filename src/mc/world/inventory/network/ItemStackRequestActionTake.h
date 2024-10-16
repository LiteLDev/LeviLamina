#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionTake : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionTake& operator=(ItemStackRequestActionTake const&);
    ItemStackRequestActionTake(ItemStackRequestActionTake const&);
    ItemStackRequestActionTake();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionTake() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
