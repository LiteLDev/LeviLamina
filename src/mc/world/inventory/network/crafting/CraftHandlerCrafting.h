#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class ItemInstance;
class ItemStack;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftRecipeAuto;
class Player;
class Recipes;
struct CreativeItemNetIdTag;
struct FullContainerName;
struct RecipeNetIdTag;
// clang-format on

class CraftHandlerCrafting : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                        mWorkbench;
    ::ll::TypedStorage<8, 8, ::Player&>                   mPlayer;
    ::ll::TypedStorage<4, 4, ::RecipeNetId>               mRecipeNetId;
    ::ll::TypedStorage<1, 1, uchar>                       mDeferredCraftCount;
    ::ll::TypedStorage<8, 24, ::std::vector<::ItemStack>> mConsumedItems;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerCrafting& operator=(CraftHandlerCrafting const&);
    CraftHandlerCrafting(CraftHandlerCrafting const&);
    CraftHandlerCrafting();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerCrafting() /*override*/ = default;

    virtual ::ItemStackNetResult handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    ) /*override*/;

    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType requestActionType) /*override*/;

    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;

    virtual ::Recipes const* _getLevelRecipes() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult _handleAutoCraft(::ItemStackRequestActionCraftRecipeAuto const& requestAction);

    MCAPI void _handleCarefulRestoration(::ItemInstance const& itemInstance) const;

    MCAPI ::ItemStackNetResult
    _handleCraftCreative(::ItemStackRequestActionCraft<::CreativeItemNetId, 14> const& requestAction);

    MCAPI ::ItemStackNetResult
    _handleCraftOutput(::ItemStackRequestActionCraft<::RecipeNetId, 12> const& requestAction);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult $handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    );

    MCAPI ::ItemStackNetResult $preHandleAction(::ItemStackRequestActionType requestActionType);

    MCAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);

    MCAPI ::Recipes const* $_getLevelRecipes() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
