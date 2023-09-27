#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionCraft.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerTrade : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerTrade& operator=(CraftHandlerTrade const&);
    CraftHandlerTrade(CraftHandlerTrade const&);
    CraftHandlerTrade();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?handleConsumedItem@CraftHandlerTrade@@EEAA?AW4ItemStackNetResult@@W4ContainerEnumName@@EAEBVItemStack@@@Z
    virtual ::ItemStackNetResult handleConsumedItem(::ContainerEnumName, uchar, class ItemStack const&);

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandlerTrade@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);

    // vIndex: 5, symbol: ?_postCraftRequest@CraftHandlerTrade@@EEAAX_N@Z
    virtual void _postCraftRequest(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getMerchantRecipeFromNetId@CraftHandlerTrade@@AEAA?AV?$tuple@W4ItemStackNetResult@@PEBVMerchantRecipe@@@std@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
    MCAPI std::tuple<::ItemStackNetResult, class MerchantRecipe const*>
          _getMerchantRecipeFromNetId(class RecipeNetId const&);

    // symbol:
    // ?_handleTrade1@CraftHandlerTrade@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
    MCAPI ::ItemStackNetResult _handleTrade1(class ItemStackRequestActionCraft<class RecipeNetId, 12> const&);

    // symbol:
    // ?_initResultItem@CraftHandlerTrade@@AEAA?AW4ItemStackNetResult@@AEBV?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@@Z
    MCAPI ::ItemStackNetResult _initResultItem(class RecipeNetId const&);

    // symbol: ?_initTrade2Consumes@CraftHandlerTrade@@AEAA?AW4ItemStackNetResult@@XZ
    MCAPI ::ItemStackNetResult _initTrade2Consumes();

    // symbol: ?_matchesAuxValueTrade2@CraftHandlerTrade@@AEBA_NAEBVItemStackBase@@0@Z
    MCAPI bool _matchesAuxValueTrade2(class ItemStackBase const&, class ItemStackBase const&) const;

    // NOLINTEND
};
