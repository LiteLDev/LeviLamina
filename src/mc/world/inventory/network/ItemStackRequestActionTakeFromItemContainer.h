#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionTakeFromItemContainer : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionTakeFromItemContainer& operator=(ItemStackRequestActionTakeFromItemContainer const&);
    ItemStackRequestActionTakeFromItemContainer(ItemStackRequestActionTakeFromItemContainer const&);
    ItemStackRequestActionTakeFromItemContainer();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionTakeFromItemContainer() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
