#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

class CraftHandlerLoom : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerLoom& operator=(CraftHandlerLoom const&);
    CraftHandlerLoom(CraftHandlerLoom const&);
    CraftHandlerLoom();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerLoom() = default;

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // NOLINTEND
};
