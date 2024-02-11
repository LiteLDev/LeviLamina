#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerLoom : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerLoom& operator=(CraftHandlerLoom const&);
    CraftHandlerLoom(CraftHandlerLoom const&);
    CraftHandlerLoom();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CraftHandlerLoom@@UEAA@XZ
    virtual ~CraftHandlerLoom() = default;

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandlerLoom@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // NOLINTEND
};
