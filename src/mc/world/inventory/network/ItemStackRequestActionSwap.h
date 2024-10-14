#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionSwap : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionSwap& operator=(ItemStackRequestActionSwap const&);
    ItemStackRequestActionSwap(ItemStackRequestActionSwap const&);
    ItemStackRequestActionSwap();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionSwap() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
