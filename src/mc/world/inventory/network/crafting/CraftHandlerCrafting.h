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
class ItemStackRequestActionCraftHandler;
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
    ::ll::UntypedStorage<1, 1>  mUnkaaf6bb;
    ::ll::UntypedStorage<8, 8>  mUnk23321f;
    ::ll::UntypedStorage<4, 4>  mUnk891d76;
    ::ll::UntypedStorage<1, 1>  mUnk42f2ad;
    ::ll::UntypedStorage<8, 24> mUnk87fec4;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerCrafting& operator=(CraftHandlerCrafting const&);
    CraftHandlerCrafting(CraftHandlerCrafting const&);
    CraftHandlerCrafting();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerCrafting() /*override*/ = default;

    // vIndex: 1
    virtual ::ItemStackNetResult handleConsumedItem(
        ::FullContainerName const& openContainerNetId,
        uchar const                slot,
        ::ItemStack const&         consumedItem
    ) /*override*/;

    // vIndex: 2
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType requestActionType) /*override*/;

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction
    ) /*override*/;

    // vIndex: 6
    virtual ::Recipes const* _getLevelRecipes() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    CraftHandlerCrafting(bool workbench, ::Player& player, ::ItemStackRequestActionCraftHandler& craftRequestHandler);

    MCAPI ::ItemStackNetResult _handleAutoCraft(::ItemStackRequestActionCraftRecipeAuto const& requestAction);

    MCAPI void _handleCarefulRestoration(::ItemInstance const& itemInstance) const;

    MCAPI ::ItemStackNetResult
    _handleCraftCreative(::ItemStackRequestActionCraft<::CreativeItemNetId, 14> const& requestAction);

    MCAPI ::ItemStackNetResult _handleCraftOutput(::ItemStackRequestActionCraft<::RecipeNetId, 12> const& requestAction
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(bool workbench, ::Player& player, ::ItemStackRequestActionCraftHandler& craftRequestHandler);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

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
