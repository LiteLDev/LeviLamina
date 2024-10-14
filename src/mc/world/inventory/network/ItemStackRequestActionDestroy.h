#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestActionTransferBase.h"

class ItemStackRequestActionDestroy : public ::ItemStackRequestActionTransferBase {
public:
    // prevent constructor by default
    ItemStackRequestActionDestroy& operator=(ItemStackRequestActionDestroy const&);
    ItemStackRequestActionDestroy(ItemStackRequestActionDestroy const&);
    ItemStackRequestActionDestroy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionDestroy() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
