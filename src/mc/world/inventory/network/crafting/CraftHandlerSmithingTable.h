#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

class CraftHandlerSmithingTable : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerSmithingTable& operator=(CraftHandlerSmithingTable const&);
    CraftHandlerSmithingTable(CraftHandlerSmithingTable const&);
    CraftHandlerSmithingTable();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerSmithingTable() = default;

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 6
    virtual class Recipes const* _getLevelRecipes() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI class Recipes const* _getLevelRecipes$() const;

    MCAPI ::ItemStackNetResult _handleCraftAction$(class ItemStackRequestActionCraftBase const& requestAction);

    // NOLINTEND
};
