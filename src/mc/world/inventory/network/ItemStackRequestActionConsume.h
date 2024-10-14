#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionConsume : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionConsume& operator=(ItemStackRequestActionConsume const&);
    ItemStackRequestActionConsume(ItemStackRequestActionConsume const&);
    ItemStackRequestActionConsume();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionConsume() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
