#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerBase& operator=(CraftHandlerBase const&);
    CraftHandlerBase(CraftHandlerBase const&);
    CraftHandlerBase();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1CraftHandlerBase@@UEAA@XZ
    virtual ~CraftHandlerBase();

    // vIndex: 1, symbol:
    // ?handleConsumedItem@CraftHandlerBase@@UEAA?AW4ItemStackNetResult@@W4ContainerEnumName@@EAEBVItemStack@@@Z
    virtual ::ItemStackNetResult
    handleConsumedItem(::ContainerEnumName openContainerNetId, uchar slot, class ItemStack const& consumedItem);

    // vIndex: 2, symbol:
    // ?preHandleAction@CraftHandlerBase@@UEAA?AW4ItemStackNetResult@@W4ItemStackRequestActionType@@@Z
    virtual ::ItemStackNetResult preHandleAction(::ItemStackRequestActionType);

    // vIndex: 3, symbol: ?endRequestBatch@CraftHandlerBase@@UEAAXXZ
    virtual void endRequestBatch();

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandleNonImplemented_DEPRECATEDASKTYLAING@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&) = 0;

    // vIndex: 5, symbol: ?_postCraftRequest@CraftHandlerBase@@MEAAX_N@Z
    virtual void _postCraftRequest(bool wasSuccess);

    // vIndex: 6, symbol: ?_getLevelRecipes@CraftHandlerBase@@MEBAPEBVRecipes@@XZ
    virtual class Recipes const* _getLevelRecipes() const;

    // NOLINTEND
};
