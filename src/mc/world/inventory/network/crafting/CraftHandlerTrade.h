#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

class CraftHandlerTrade : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerTrade& operator=(CraftHandlerTrade const&);
    CraftHandlerTrade(CraftHandlerTrade const&);
    CraftHandlerTrade();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerTrade() = default;

    // vIndex: 1
    virtual ::ItemStackNetResult
    handleConsumedItem(::ContainerEnumName openContainerNetId, uchar slot, class ItemStack const& consumedItem);

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 5
    virtual void _postCraftRequest(bool wasSuccess);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::tuple<::ItemStackNetResult, class MerchantRecipe const*>
          _getMerchantRecipeFromNetId(RecipeNetId const& tradeRecipeNetId);

    MCAPI ::ItemStackNetResult _handleTrade1(class ItemStackRequestActionCraft<RecipeNetId, 12> const& requestAction);

    MCAPI ::ItemStackNetResult _initResultItem(RecipeNetId const& tradeRecipeNetId);

    MCAPI ::ItemStackNetResult _initTrade2Consumes();

    MCAPI bool
    _matchesAuxValueTrade2(class ItemStackBase const& consumedItem, class ItemStackBase const& expected) const;

    // NOLINTEND
};
