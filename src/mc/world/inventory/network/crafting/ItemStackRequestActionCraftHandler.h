#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/network/ItemStackNetResult.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemInstance;
class ItemStackRequestActionConsume;
class ItemStackRequestActionCraftBase;
class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING;
struct ContainerValidationCraftInputs;
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
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
