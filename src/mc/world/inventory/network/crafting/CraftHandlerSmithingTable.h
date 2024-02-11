#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerSmithingTable : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerSmithingTable& operator=(CraftHandlerSmithingTable const&);
    CraftHandlerSmithingTable(CraftHandlerSmithingTable const&);
    CraftHandlerSmithingTable();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CraftHandlerSmithingTable@@UEAA@XZ
    virtual ~CraftHandlerSmithingTable() = default;

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandlerSmithingTable@@EEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 6, symbol: ?_getLevelRecipes@CraftHandlerSmithingTable@@EEBAPEBVRecipes@@XZ
    virtual class Recipes const* _getLevelRecipes() const;

    // NOLINTEND
};
