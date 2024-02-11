#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/TypedServerNetId.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionCraft.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerEnchant : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerEnchant& operator=(CraftHandlerEnchant const&);
    CraftHandlerEnchant(CraftHandlerEnchant const&);
    CraftHandlerEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CraftHandlerEnchant@@UEAA@XZ
    virtual ~CraftHandlerEnchant() = default;

    // vIndex: 3, symbol: ?endRequestBatch@CraftHandlerEnchant@@MEAAXXZ
    virtual void endRequestBatch();

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandlerEnchant@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 5, symbol: ?_postCraftRequest@CraftHandlerEnchant@@MEAAX_N@Z
    virtual void _postCraftRequest(bool wasSuccess);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getEnchantingModel@CraftHandlerEnchant@@AEBAAEAVEnchantingContainerManagerModel@@XZ
    MCAPI class EnchantingContainerManagerModel& _getEnchantingModel() const;

    // symbol:
    // ?_handleEnchant@CraftHandlerEnchant@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
    MCAPI ::ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<RecipeNetId, 12> const& requestAction);

    // NOLINTEND
};
