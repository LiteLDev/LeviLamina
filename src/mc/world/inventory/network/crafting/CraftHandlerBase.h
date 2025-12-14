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
class ItemStackRequestActionCraftHandler;
class Recipe;
class Recipes;
struct AllowedAnywhereConsume;
struct ExpectedAnywhereConsume;
struct ExpectedSlotConsume;
struct FullContainerName;
struct RecipeNetIdTag;
// clang-format on

class CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionCraftHandler&>     mCraftRequestHandler;
    ::ll::TypedStorage<1, 1, ::ItemStackRequestActionType>              mCraftActionType;
    ::ll::TypedStorage<1, 1, bool>                                      mNonImplementedTrustClientResults;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedSlotConsume>>     mExpectedSlotConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::ExpectedAnywhereConsume>> mExpectedAnywhereConsumes;
    ::ll::TypedStorage<8, 24, ::std::vector<::AllowedAnywhereConsume>>  mAllowedAnywhereConsumes;
    ::ll::TypedStorage<1, 1, bool>                                      mIsCraftRequest;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerBase& operator=(CraftHandlerBase const&);
    CraftHandlerBase(CraftHandlerBase const&);
    CraftHandlerBase();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerBase() = default;

    virtual ::ItemStackNetResult handleConsumedItem(::FullContainerName const&, uchar const, ::ItemStack const&);

    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    virtual void endRequestBatch();

    virtual ::ItemStackNetResult _handleCraftAction(::ItemStackRequestActionCraftBase const&) = 0;

    virtual void _postCraftRequest(bool const wasSuccess);

    virtual ::Recipes const* _getLevelRecipes() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::tuple<::ItemStackNetResult, ::Recipe const*> _getRecipeFromNetId(::RecipeNetId const& recipeNetId);

    MCAPI ::ItemStackNetResult
    handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction, ::ItemStackNetResult currentResult);

    MCAPI void postRequest(bool wasSuccess);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $endRequestBatch();

    MCFOLD void $_postCraftRequest(bool const wasSuccess);

    MCFOLD ::Recipes const* $_getLevelRecipes() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
