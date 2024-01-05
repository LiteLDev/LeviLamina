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
    // vIndex: 0, symbol: __gen_??1StorageItemComponent@@UEAA@XZ
    virtual ~StorageItemComponent() = default;

    // symbol: ?calculateAddableCount@StorageItemComponent@@QEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint calculateAddableCount(class ItemStack const& itemStack, class ItemStackBase const&) const;

    // symbol: ?tryAddItemStack@StorageItemComponent@@QEBA_NAEAVItemStack@@0@Z
    MCAPI bool tryAddItemStack(class ItemStack& itemStack, class ItemStack&) const;

    // symbol: ?tryGenerateUserData@StorageItemComponent@@QEBAXAEAVItemStack@@@Z
    MCAPI void tryGenerateUserData(class ItemStack& itemStack) const;

    // symbol: ?tryRemoveItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
    MCAPI class ItemStack tryRemoveItemStack(class ItemStack& itemStack) const;

    // symbol: ?tryRemoveOneFromItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
    MCAPI class ItemStack tryRemoveOneFromItemStack(class ItemStack& itemStack) const;

    // symbol: ?getIdentifier@StorageItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // symbol: ?DEFAULT_MAX_CARRY_WEIGHT@StorageItemComponent@@2IB
    MCAPI static uint const DEFAULT_MAX_CARRY_WEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateAddableCountForBasicStorage@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint
    _calculateAddableCountForBasicStorage(class ItemStack const& itemStack, class ItemStackBase const&) const;

    // symbol: ?_getItemListSize@StorageItemComponent@@AEBAIAEAVItemStack@@@Z
    MCAPI uint _getItemListSize(class ItemStack& itemStack) const;

    // symbol: ?_getPerItemCost@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint _getPerItemCost(class ItemStack const&, class ItemStackBase const&) const;

    // symbol: ?_storeItemInNewOrExistingSlot@StorageItemComponent@@AEBAXAEAVItemStack@@0I@Z
    MCAPI void _storeItemInNewOrExistingSlot(class ItemStack& itemStack, class ItemStack&, uint) const;

    // symbol: ?_updateRemainingWeight@StorageItemComponent@@AEBAXAEAVItemStack@@AEBV2@H@Z
    MCAPI void _updateRemainingWeight(class ItemStack& itemStack, class ItemStack const&, int count) const;

    // NOLINTEND
};
