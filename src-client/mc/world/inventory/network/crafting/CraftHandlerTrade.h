#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStack;
class MerchantRecipe;
struct FullContainerName;
struct ItemStackRequestActionCraftBase;
struct RecipeNetIdTag;
// clang-format on

class CraftHandlerTrade : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ContainerScreenContext const&> mScreenContext;
    ::ll::TypedStorage<1, 1, bool>                            mIsTrade2;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>>        mTradeIndex;
    ::ll::TypedStorage<4, 4, int>                             mNumCrafts;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerTrade& operator=(CraftHandlerTrade const&);
    CraftHandlerTrade(CraftHandlerTrade const&);
    CraftHandlerTrade();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerTrade() /*override*/ = default;

    // vIndex: 4
    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;

    // vIndex: 1
    virtual ::ItemStackNetResult handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    ) /*override*/;

    // vIndex: 5
    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::tuple<::ItemStackNetResult, ::MerchantRecipe const*>
    _getMerchantRecipeFromNetId(::RecipeNetId const& tradeRecipeNetId);

    MCAPI ::ItemStackNetResult _handleTrade1(::ItemStackRequestActionCraft<::RecipeNetId, 12> const& requestAction);

    MCAPI ::ItemStackNetResult _initResultItem(::RecipeNetId const& tradeRecipeNetId, uchar numCrafts);

    MCAPI ::ItemStackNetResult _initTrade2Consumes();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);

    MCAPI ::ItemStackNetResult $handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    );

    MCAPI void $_postCraftRequest(bool const wasSuccess);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
