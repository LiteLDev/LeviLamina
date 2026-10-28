#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

// auto generated forward declare list
// clang-format off
class ItemStackRequestActionCraftBase;
// clang-format on

class CraftHandlerDiscPress : public ::CraftHandlerBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerDiscPress() /*override*/ = default;

    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);


    // NOLINTEND
};
