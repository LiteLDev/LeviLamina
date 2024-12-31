#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStackRequestActionConsume;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING;
class ItemStackRequestActionCreate;
class ItemStackRequestActionHandler;
class Player;
class SimpleSparseContainer;
struct ContainerValidationCraftInputs;
struct FullContainerName;
struct ItemStackRequestHandlerSlotInfo;
struct ItemStackRequestSlotInfo;
// clang-format on

class ItemStackRequestActionCraftHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk72b8ee;
    ::ll::UntypedStorage<8, 8>  mUnk4e7e4a;
    ::ll::UntypedStorage<8, 8>  mUnk3298c2;
    ::ll::UntypedStorage<1, 1>  mUnk538af3;
    ::ll::UntypedStorage<8, 16> mUnkad4014;
    ::ll::UntypedStorage<8, 24> mUnka15e54;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemStackRequestActionCraftHandler& operator=(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionCraftHandler() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemStackRequestActionCraftHandler(::ItemStackRequestActionHandler& actionHandler, ::Player& player);

    MCAPI ::ItemStackNetResult _beginCraftRequest();

    MCAPI ::std::unique_ptr<::ContainerValidationCraftInputs>
    _createCraftInputs(::ItemStackRequestActionCraftBase const& requestAction);

    MCAPI ::std::shared_ptr<::SimpleSparseContainer>
    _getOrInitSparseContainer(::FullContainerName const& openContainerId);

    MCAPI ::ItemStackNetResult _initCraftResults(::std::vector<::ItemInstance> const& results, uchar numCrafts);

    MCAPI ::ItemInstance* _initSingleCraftResult(::ItemInstance const& itemInstance);

    MCAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar resultsIndex);

    MCAPI ::ItemStackRequestHandlerSlotInfo _validateRequestSlot(::ItemStackRequestSlotInfo const& requestSlotInfo);

    MCAPI ::ItemStackNetResult endRequest(::ItemStackNetResult currentResult);

    MCAPI void endRequestBatch();

    MCAPI ::ItemStackNetResult handleConsume(::ItemStackRequestActionConsume const& requestAction);

    MCAPI ::ItemStackNetResult handleCraftAction(::ItemStackRequestActionCraftBase const& requestAction);

    MCAPI ::ItemStackNetResult
    handleCraftResults(::ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const& requestAction);

    MCAPI ::ItemStackNetResult handleCreate(::ItemStackRequestActionCreate const& requestAction);

    MCAPI bool isCraftRequest() const;

    MCAPI void onContainerScreenOpen(::ContainerScreenContext const& screenContext);

    MCAPI void postRequest(bool wasSuccess);

    MCAPI ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType requestActionType);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ItemStackRequestActionHandler& actionHandler, ::Player& player);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
