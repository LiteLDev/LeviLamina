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
    CraftHandlerSmithingTable& operator=(CraftHandlerSmithingTable const&) = delete;
    CraftHandlerSmithingTable(CraftHandlerSmithingTable const&)            = delete;
    CraftHandlerSmithingTable()                                            = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandlerSmithingTable@@EEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);

    // vIndex: 6, symbol: ?_getLevelRecipes@CraftHandlerSmithingTable@@EEBAPEBVRecipes@@XZ
    virtual class Recipes const* _getLevelRecipes() const;

    // NOLINTEND
};
