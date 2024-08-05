#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class ItemStackRequestActionCraftHandler {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftHandler& operator=(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemStackRequestActionCraftHandler() = default;

    MCAPI ItemStackRequestActionCraftHandler(class ItemStackRequestActionHandler&, class Player& player);

    MCAPI ::ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const& results, uchar numCrafts);

    MCAPI class ItemInstance* _initSingleCraftResult(class ItemInstance const& itemInstance);

    MCAPI ::ItemStackNetResult endRequest(::ItemStackNetResult currentResult);

    MCAPI void endRequestBatch();

    MCAPI ::ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const& requestAction);

    MCAPI ::ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    MCAPI ::ItemStackNetResult
    handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const& requestAction);

    MCAPI ::ItemStackNetResult handleCreate(class ItemStackRequestActionCreate const& requestAction);

    MCAPI bool isCraftRequest() const;

    MCAPI void onContainerScreenOpen(class ContainerScreenContext const& screenContext);

    MCAPI void postRequest(bool wasSuccess);

    MCAPI ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::unique_ptr<struct ContainerValidationCraftInputs>
          _createCraftInputs(class ItemStackRequestActionCraftBase const& requestAction);

    MCAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar resultsIndex);

    // NOLINTEND
};
