#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestActionCraftBase;
// clang-format on

class CraftHandleNonImplemented_DEPRECATEDASKTYLAING : public ::CraftHandlerBase {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) /*override*/;

    // vIndex: 0
    virtual ~CraftHandleNonImplemented_DEPRECATEDASKTYLAING() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
