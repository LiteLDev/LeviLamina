#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

class CraftHandleNonImplemented_DEPRECATEDASKTYLAING : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING& operator=(CraftHandleNonImplemented_DEPRECATEDASKTYLAING const&);
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING(CraftHandleNonImplemented_DEPRECATEDASKTYLAING const&);
    CraftHandleNonImplemented_DEPRECATEDASKTYLAING();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandleNonImplemented_DEPRECATEDASKTYLAING() = default;

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::ItemStackNetResult _handleCraftAction$(class ItemStackRequestActionCraftBase const&);

    // NOLINTEND
};
