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
    CraftHandlerEnchant& operator=(CraftHandlerEnchant const&) = delete;
    CraftHandlerEnchant(CraftHandlerEnchant const&)            = delete;
    CraftHandlerEnchant()                                      = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?endRequestBatch@CraftHandlerEnchant@@MEAAXXZ
    virtual void endRequestBatch();

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandlerEnchant@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const&);

    // vIndex: 5, symbol: ?_postCraftRequest@CraftHandlerEnchant@@MEAAX_N@Z
    virtual void _postCraftRequest(bool);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getEnchantingModel@CraftHandlerEnchant@@AEBAAEAVEnchantingContainerManagerModel@@XZ
    MCAPI class EnchantingContainerManagerModel& _getEnchantingModel() const;

    // symbol:
    // ?_handleEnchant@CraftHandlerEnchant@@AEAA?AW4ItemStackNetResult@@AEBV?$ItemStackRequestActionCraft@V?$TypedServerNetId@URecipeNetIdTag@@I$0A@@@$0M@@@@Z
    MCAPI ::ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<
                                              class TypedServerNetId<struct RecipeNetIdTag, uint, 0>,
                                              12> const&);

    // NOLINTEND
};
