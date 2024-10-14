#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/ItemStackNetResult.h"
#include "mc/world/inventory/network/ItemStackRequestActionType.h"
#include "mc/world/inventory/network/TypedServerNetId.h"
#include "mc/world/inventory/network/crafting/CraftHandlerBase.h"
#include "mc/world/inventory/network/crafting/ItemStackRequestActionCraft.h"

class CraftHandlerEnchant : public ::CraftHandlerBase {
public:
    // prevent constructor by default
    CraftHandlerEnchant& operator=(CraftHandlerEnchant const&);
    CraftHandlerEnchant(CraftHandlerEnchant const&);
    CraftHandlerEnchant();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CraftHandlerEnchant() = default;

    // vIndex: 3
    virtual void endRequestBatch();

    // vIndex: 4
    virtual ::ItemStackNetResult _handleCraftAction(class ItemStackRequestActionCraftBase const& requestAction);

    // vIndex: 5
    virtual void _postCraftRequest(bool wasSuccess);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class EnchantingContainerManagerModel& _getEnchantingModel() const;

    MCAPI ::ItemStackNetResult _handleEnchant(class ItemStackRequestActionCraft<RecipeNetId, 12> const& requestAction);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI ::ItemStackNetResult _handleCraftAction$(class ItemStackRequestActionCraftBase const& requestAction);

    MCAPI void _postCraftRequest$(bool wasSuccess);

    MCAPI void endRequestBatch$();

    // NOLINTEND
};
