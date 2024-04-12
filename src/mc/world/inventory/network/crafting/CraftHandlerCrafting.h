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
    // vIndex: 0, symbol: __gen_??1CraftHandlerCrafting@@UEAA@XZ
    virtual ~CraftHandlerCrafting() = default;

    // vIndex: 1, symbol:
    // ?handleConsumedItem@CraftHandlerCrafting@@UEAA?AW4ItemStackNetResult@@W4ContainerEnumName@@EAEBVItemStack@@@Z
    virtual ::ItemStackNetResult
    handleConsumedItem(::ContainerEnumName openContainerNetId, uchar slot, class ItemStack const& consumedItem);

    // vIndex: 2, symbol:
    // ?preHandleAction@CraftHandlerCrafting@@UEAA?AW4ItemStackNetResult@@W4ItemStackRequestActionType@@@Z
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandlerCrafting@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 6, symbol: ?_getLevelRecipes@CraftHandlerCrafting@@EEBAPEBVRecipes@@XZ
    virtual class Recipes const* _getLevelRecipes() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_handleAutoCraft@CraftHandlerCrafting@@AEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftRecipeAuto@@@Z
    MCAPI ::ItemStackNetResult _handleAutoCraft(class ItemStackRequestActionCraftRecipeAuto const& requestAction);

    // symbol: ?_handleCarefulRestoration@CraftHandlerCrafting@@AEBAXAEBVItemInstance@@@Z
    MCAPI void _handleCarefulRestoration(class ItemInstance const&) const;

    // symbol:
    // ?_handleCraftOutput@CraftHandlerCrafting@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
    MCAPI ::ItemStackNetResult
    _handleCraftOutput(class ItemStackRequestActionCraft<RecipeNetId, 12> const& requestAction);

    // NOLINTEND
};
