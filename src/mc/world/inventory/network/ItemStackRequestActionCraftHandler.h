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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ItemStackRequestActionCraftHandler() = default;

    // symbol: ??0ItemStackRequestActionCraftHandler@@QEAA@AEAVItemStackRequestActionHandler@@AEAVPlayer@@@Z
    MCAPI ItemStackRequestActionCraftHandler(class ItemStackRequestActionHandler&, class Player&);

    // symbol:
    // ?_initCraftResults@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBV?$vector@VItemInstance@@V?$allocator@VItemInstance@@@std@@@std@@E@Z
    MCAPI ::ItemStackNetResult _initCraftResults(std::vector<class ItemInstance> const&, uchar);

    // symbol: ?_initSingleCraftResult@ItemStackRequestActionCraftHandler@@QEAAPEAVItemInstance@@AEBV2@@Z
    MCAPI class ItemInstance* _initSingleCraftResult(class ItemInstance const&);

    // symbol: ?endRequest@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@W42@@Z
    MCAPI ::ItemStackNetResult endRequest(::ItemStackNetResult);

    // symbol: ?endRequestBatch@ItemStackRequestActionCraftHandler@@QEAAXXZ
    MCAPI void endRequestBatch();

    // symbol:
    // ?handleConsume@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionConsume@@@Z
    MCAPI ::ItemStackNetResult handleConsume(class ItemStackRequestActionConsume const&);

    // symbol:
    // ?handleCraftAction@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    MCAPI ::ItemStackNetResult handleCraftAction(class ItemStackRequestActionCraftBase const&);

    // symbol:
    // ?handleCraftResults@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING@@@Z
    MCAPI ::ItemStackNetResult handleCraftResults(class ItemStackRequestActionCraftResults_DEPRECATEDASKTYLAING const&);

    // symbol:
    // ?handleCreate@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCreate@@@Z
    MCAPI ::ItemStackNetResult handleCreate(class ItemStackRequestActionCreate const&);

    // symbol: ?isCraftRequest@ItemStackRequestActionCraftHandler@@QEBA_NXZ
    MCAPI bool isCraftRequest() const;

    // symbol: ?onContainerScreenOpen@ItemStackRequestActionCraftHandler@@QEAAXAEBVContainerScreenContext@@@Z
    MCAPI void onContainerScreenOpen(class ContainerScreenContext const&);

    // symbol: ?postRequest@ItemStackRequestActionCraftHandler@@QEAAX_N@Z
    MCAPI void postRequest(bool);

    // symbol:
    // ?preHandleAction@ItemStackRequestActionCraftHandler@@QEAA?AW4ItemStackNetResult@@W4ItemStackRequestActionType@@@Z
    MCAPI ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createCraftInputs@ItemStackRequestActionCraftHandler@@AEAA?AV?$unique_ptr@UContainerValidationCraftInputs@@U?$default_delete@UContainerValidationCraftInputs@@@std@@@std@@AEBVItemStackRequestActionCraftBase@@@Z
    MCAPI std::unique_ptr<struct ContainerValidationCraftInputs>
          _createCraftInputs(class ItemStackRequestActionCraftBase const&);

    // symbol: ?_setCreatedItemOutputSlot@ItemStackRequestActionCraftHandler@@AEAA?AW4ItemStackNetResult@@E@Z
    MCAPI ::ItemStackNetResult _setCreatedItemOutputSlot(uchar);

    // NOLINTEND
};
