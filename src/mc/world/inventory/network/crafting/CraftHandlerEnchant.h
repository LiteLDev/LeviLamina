#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

// auto generated forward declare list
// clang-format off
class EnchantingContainerManagerModel;
class ItemStackRequestActionCraftBase;
class Player;
struct RecipeNetIdTag;
// clang-format on

class CraftHandlerEnchant : public ::CraftHandlerBase {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>       mEnchantCost;
    ::ll::TypedStorage<8, 8, ::Player&> mPlayer;
    ::ll::TypedStorage<1, 1, bool>      mRecalculateOptions;
    // NOLINTEND

public:
    // prevent constructor by default
    CraftHandlerEnchant& operator=(CraftHandlerEnchant const&);
    CraftHandlerEnchant(CraftHandlerEnchant const&);
    CraftHandlerEnchant();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CraftHandlerEnchant() /*override*/ = default;

    virtual ::ItemStackNetResult
    _handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction) /*override*/;

    virtual void _postCraftRequest(bool const wasSuccess) /*override*/;

    virtual void endRequestBatch() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::EnchantingContainerManagerModel& _getEnchantingModel() const;

    MCNAPI ::ItemStackNetResult _handleEnchant(::ItemStackRequestActionCraft<::RecipeNetId, 12> const& requestAction);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::ItemStackNetResult $_handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);

    MCNAPI void $_postCraftRequest(bool const wasSuccess);

    MCNAPI void $endRequestBatch();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
