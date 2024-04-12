#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemStackNetResult.h"

class ItemStackRequestActionCraftHandler {
public:
    // prevent constructor by default
    ItemStackRequestActionCraftHandler& operator=(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler(ItemStackRequestActionCraftHandler const&);
    ItemStackRequestActionCraftHandler();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ItemStackRequestActionCraftHandler@@UEAA@XZ
    virtual ~ItemStackRequestActionCraftHandler() = default;

    // symbol:
    // ?_initCraftResults@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@E@Z
    MCAPI ::ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const& results, uchar numCrafts);

    // symbol: ?_initSingleCraftResult@ItemStackRequestActionCraftHandler@@QEAAPEAVItemInstance@@AEBV2@@Z
    MCAPI class ItemInstance* _initSingleCraftResult(class ItemInstance const& itemInstance);

    // symbol: ?endRequest@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@W42@@Z
    MCAPI ::ItemStackNetResult endRequest(::ItemStackNetResult currentResult);

    // symbol:
    // ?handleConsume@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionConsume@@@Z
    MCAPI ::ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const& requestAction);

    // symbol:
    // ?handleCraftAction@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    MCAPI ::ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // symbol:
    // ?handleCraftResults@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@@Z
    MCAPI ::ItemStackNetResult
    handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const& requestAction);

    // symbol: ?isCraftRequest@ItemStackRequestActionCraftHandler@@QEBA_NXZ
    MCAPI bool isCraftRequest() const;

    // symbol: ?onContainerScreenOpen@ItemStackRequestActionCraftHandler@@QEAAXAEBVContainerScreenContext@@@Z
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const& screenContext);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createCraftInputs@ItemStackRequestActionCraftHandler@@AEAA?AV?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@AEBVItemStackRequestActionCraftBase@@@Z
    MCAPI std::unique_ptr<struct ContainerValidationCraftInputs>
          _createCraftInputs(class ItemStackRequestActionCraftBase const& requestAction);

    // symbol: ?_setCreatedItemOutputSlot@ItemStackRequestActionCraftHandler@@AEAA?AW4ItemStackNetResult@@E@Z
    MCAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar resultsIndex);

    // NOLINTEND
};
