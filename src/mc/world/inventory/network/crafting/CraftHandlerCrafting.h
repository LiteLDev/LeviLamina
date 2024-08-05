#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionCraft.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerCrafting : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerCrafting& operator=(CraftHandlerCrafting const&);
    CraftHandlerCrafting(CraftHandlerCrafting const&);
    CraftHandlerCrafting();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerCrafting() = default;

    // vIndex: 1
    virtual ::ItemStackNetResult
    handleConsumedItem(::ContainerEnumName openContainerNetId, uchar slot, class ItemStack const& consumedItem);

    // vIndex: 2
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 6
    virtual class Recipes const* _getLevelRecipes() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult _handleAutoCraft(class ItemStackRequestActionCraftRecipeAuto const& requestAction);

    MCAPI void _handleCarefulRestoration(class ItemInstance const&) const;

    MCAPI ::ItemStackNetResult
    _handleCraftOutput(class ItemStackRequestActionCraft<RecipeNetId, 12> const& requestAction);

    // NOLINTEND
};
