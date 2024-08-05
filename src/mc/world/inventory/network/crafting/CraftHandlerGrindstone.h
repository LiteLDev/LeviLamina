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
    // vIndex: 0
    virtual ~CraftHandlerGrindstone() = default;

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 5
    virtual void _postCraftRequest(bool wasSuccess);

    MCAPI static std::pair<class ItemStack, struct ItemStackNetIdVariant>
    getResultItem(class ItemStack const&, class ItemStack const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int _getExperienceFromItem(class ItemStack const& stack) const;

    MCAPI bool _resolveNetIdAndValidate(::ContainerEnumName, uchar slot, struct ItemStackNetIdVariant const& netId);

    MCAPI static class ItemStack
    _getResultItemWithNoEnchants(class ItemStack&, std::vector<class ItemStack> const&, bool&);

    // NOLINTEND
};
