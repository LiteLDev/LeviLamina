#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"

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
struct ContainerValidationCraftInputs;
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
    MCNAPI ::std::unique_ptr<::ContainerValidationCraftInputs>
    _createCraftInputs(::ItemStackRequestActionCraftBase const& requestAction);

    MCNAPI ::ItemStackNetResult _initCraftResults(::std::vector<::ItemInstance> const& results, uchar numCrafts);

    MCNAPI ::ItemInstance* _initSingleCraftResult(::ItemInstance const& itemInstance);

    MCNAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar resultsIndex);

    MCNAPI ::ItemStackNetResult endRequest(::ItemStackNetResult currentResult);

    MCNAPI ::ItemStackNetResult handleConsume(::ItemStackRequestActionConsume const& requestAction);

    MCNAPI ::ItemStackNetResult handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);

    MCNAPI ::ItemStackNetResult
    handleCraftResults(::ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const& requestAction);

    MCNAPI void onContainerScreenOpen(::ContainerScreenContext const& screenContext);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
