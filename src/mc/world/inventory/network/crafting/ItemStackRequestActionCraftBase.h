#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/world/inventory/network/ItemStackRequestAction.h"

class ItemStackRequestActionCraftBase : public ::ItemStackRequestAction {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftBase& operator=(ItemStackRequestActionCraftBase const&);
    ItemStackRequestActionCraftBase(ItemStackRequestActionCraftBase const&);
    ItemStackRequestActionCraftBase();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionCraftBase();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
