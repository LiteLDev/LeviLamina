#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/item/components/ItemStackNetResult.h"
#include "mc/world/item/components/ItemStackRequestActionType.h"

class CraftHandlerGrindstone : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerGrindstone& operator=(CraftHandlerGrindstone const&);
    CraftHandlerGrindstone(CraftHandlerGrindstone const&);
    CraftHandlerGrindstone();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CraftHandlerGrindstone@@UEAA@XZ
    virtual ~CraftHandlerGrindstone() = default;

    // vIndex: 4, symbol:
    // ?_handleCraftAction@CraftHandlerGrindstone@@MEAA?AW4ItemStackNetResult@@AEBVItemStackRequestActionCraftBase@@@Z
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 5, symbol: ?_postCraftRequest@CraftHandlerGrindstone@@EEAAX_N@Z
    virtual void _postCraftRequest(bool wasSuccess);

    // symbol:
    // ?getResultItem@CraftHandlerGrindstone@@SA?AU?$pair@VItemStack@@UItemStackNetIdVariant@@@std@@AEBVItemStack@@0@Z
    MCAPI static std::pair<class ItemStack, struct ItemStackNetIdVariant>
    getResultItem(class ItemStack const&, class ItemStack const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_getExperienceFromItem@CraftHandlerGrindstone@@AEBAHAEBVItemStack@@@Z
    MCAPI int _getExperienceFromItem(class ItemStack const& stack) const;

    // symbol:
    // ?_resolveNetIdAndValidate@CraftHandlerGrindstone@@AEAA_NW4ContainerEnumName@@EAEBUItemStackNetIdVariant@@@Z
    MCAPI bool _resolveNetIdAndValidate(::ContainerEnumName, uchar slot, struct ItemStackNetIdVariant const& netId);

    // symbol:
    // ?_getResultItemWithNoEnchants@CraftHandlerGrindstone@@CA?AVItemStack@@AEAV2@AEBV?$vector@VItemStack@@V?$allocator@VItemStack@@@std@@@std@@AEA_N@Z
    MCAPI static class ItemStack
    _getResultItemWithNoEnchants(class ItemStack&, std::vector<class ItemStack> const&, bool&);

    // NOLINTEND
};
