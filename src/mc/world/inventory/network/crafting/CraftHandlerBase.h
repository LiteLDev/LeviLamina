#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class ItemStackRequestActionCraftBase;
class Recipe;
class Recipes;
struct FullContainerName;
struct RecipeNetIdTag;
// clang-format on

class CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk97411e;
    ::ll::UntypedStorage<1, 1>  mUnkf6091a;
    ::ll::UntypedStorage<1, 1>  mUnkd3fa17;
    ::ll::UntypedStorage<8, 24> mUnk1a195c;
    ::ll::UntypedStorage<8, 24> mUnk4b67b7;
    ::ll::UntypedStorage<8, 24> mUnke75150;
    ::ll::UntypedStorage<1, 1>  mUnkbdc7c9;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerBase& operator=(CraftHandlerBase const&);
    CraftHandlerBase(CraftHandlerBase const&);
    CraftHandlerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerBase() = default;

    // vIndex: 1
    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);

    // vIndex: 2
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    // vIndex: 3
    virtual void endRequestBatch();

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) = 0;

    // vIndex: 5
    virtual void _postCraftRequest(bool const wasSuccess);

    // vIndex: 6
    virtual ::Recipes const* _getLevelRecipes() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::tuple<::ItemStackNetResult, ::Recipe const*> _getRecipeFromNetId(::RecipeNetId const& recipeNetId);

    MCNAPI ::ItemStackNetResult
    handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction, ::ItemStackNetResult currentResult);

    MCNAPI void postRequest(bool wasSuccess);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $endRequestBatch();

    MCNAPI void $_postCraftRequest(bool const wasSuccess);

    MCNAPI ::Recipes const* $_getLevelRecipes() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
