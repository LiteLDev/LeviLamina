#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class CraftHandlerBase;
class ItemInstance;
class ItemStackRequestActionConsume;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING;
class ItemStackRequestActionHandler;
class Player;
class SimpleSparseContainer;
// clang-format on

class ItemStackRequestActionCraftHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ItemStackRequestActionHandler&>                  mRequestActionHandler;
    ::ll::TypedStorage<8, 8, ::Player&>                                         mPlayer;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CraftHandlerBase>>             mCraftHandler;
    ::ll::TypedStorage<1, 1, bool>                                              mIsCraftRequest;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::SimpleSparseContainer>>       mCreatedOutputSparseContainer;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ItemInstance, uint>>> mCraftResults;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftHandler& operator=(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemStackRequestActionCraftHandler() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ItemStackNetResult _initCraftResults(::std::vector<::ItemInstance> const& results, uchar numCrafts);

    MCAPI ::ItemInstance* _initSingleCraftResult(::ItemInstance const& itemInstance);

    MCAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar resultsIndex);

    MCAPI ::ItemStackNetResult endRequest(::ItemStackNetResult currentResult);

    MCAPI ::ItemStackNetResult handleConsume(::ItemStackRequestActionConsume const& requestAction);

    MCAPI ::ItemStackNetResult handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);

    MCAPI ::ItemStackNetResult
    handleCraftResults(::ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const& requestAction);

    MCAPI bool isCraftRequest() const;

    MCAPI void onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    MCAPI ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType requestActionType);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
