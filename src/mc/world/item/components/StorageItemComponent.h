#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

class StorageItemComponent : public ::ItemComponent {
public:
    // prevent constructor by default
    StorageItemComponent& operator=(StorageItemComponent const&);
    StorageItemComponent(StorageItemComponent const&);
    StorageItemComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StorageItemComponent() = default;

    MCAPI uint calculateAddableCount(class ItemStack const& item, class ItemStackBase const& newItemStack) const;

    MCAPI bool tryAddItemStack(class ItemStack& item, class ItemStack& newItemStack) const;

    MCAPI void tryGenerateUserData(class ItemStack& item) const;

    MCAPI class ItemStack tryRemoveItemStack(class ItemStack& item) const;

    MCAPI class ItemStack tryRemoveOneFromItemStack(class ItemStack& item) const;

    MCAPI static class HashedString const& getIdentifier();

    MCAPI static uint const DEFAULT_MAX_CARRY_WEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI uint
    _calculateAddableCountForBasicStorage(class ItemStack const& item, class ItemStackBase const& newItemStack) const;

    MCAPI uint _getItemListSize(class ItemStack& item) const;

    MCAPI uint _getPerItemCost(class ItemStack const&, class ItemStackBase const& newItemStack) const;

    MCAPI void
    _storeItemInNewOrExistingSlot(class ItemStack& item, class ItemStack& newItemStack, uint addableCount) const;

    MCAPI void _updateRemainingWeight(class ItemStack& item, class ItemStack const& newItemStack, int count) const;

    // NOLINTEND
};
