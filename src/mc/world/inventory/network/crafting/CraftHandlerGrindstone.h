#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"

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
    getResultItem(class ItemStack const& input, class ItemStack const& additional);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI int _getExperienceFromItem(class ItemStack const& stack) const;

    MCAPI bool
    _resolveNetIdAndValidate(::ContainerEnumName containerNetId, uchar slot, struct ItemStackNetIdVariant const& netId);

    MCAPI static class ItemStack _getResultItemWithNoEnchants(
        class ItemStack&                    result,
        std::vector<class ItemStack> const& inputItems,
        bool&                               onlyHasCurses
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI ::ItemStackNetResult _handleCraftAction$(class ItemStackRequestActionCraftBase const& requestAction);

    MCAPI void _postCraftRequest$(bool wasSuccess);

    // NOLINTEND
};
