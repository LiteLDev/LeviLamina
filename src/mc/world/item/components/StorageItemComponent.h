#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/ItemComponent.h"

// auto generated forward declare list
// clang-format off
namespace Puv::v1_20_50 { struct StorageItemComponent; }
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

    // symbol: ??0StorageItemComponent@@QEAA@U0v1_20_50@Puv@@@Z
    MCAPI explicit StorageItemComponent(struct Puv::v1_20_50::StorageItemComponent);

    // symbol: ?calculateAddableCount@StorageItemComponent@@QEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint calculateAddableCount(class ItemStack const& item, class ItemStackBase const&) const;

    // symbol: ?tryAddItemStack@StorageItemComponent@@QEBA_NAEAVItemStack@@0@Z
    MCAPI bool tryAddItemStack(class ItemStack& item, class ItemStack&) const;

    // symbol: ?tryGenerateUserData@StorageItemComponent@@QEBAXAEAVItemStack@@@Z
    MCAPI void tryGenerateUserData(class ItemStack& item) const;

    // symbol: ?tryRemoveItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
    MCAPI class ItemStack tryRemoveItemStack(class ItemStack& item) const;

    // symbol: ?tryRemoveOneFromItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
    MCAPI class ItemStack tryRemoveOneFromItemStack(class ItemStack& item) const;

    // symbol: ?use@StorageItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
    MCAPI bool use(class ItemStack& item, class Player& player) const;

    // symbol: ?getIdentifier@StorageItemComponent@@SAAEBVHashedString@@XZ
    MCAPI static class HashedString const& getIdentifier();

    // symbol: ?DEFAULT_MAX_CARRY_WEIGHT@StorageItemComponent@@2IB
    MCAPI static uint const DEFAULT_MAX_CARRY_WEIGHT;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_calculateAddableCountForBasicStorage@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint _calculateAddableCountForBasicStorage(class ItemStack const& item, class ItemStackBase const&) const;

    // symbol: ?_getItemListSize@StorageItemComponent@@AEBAIAEAVItemStack@@@Z
    MCAPI uint _getItemListSize(class ItemStack& item) const;

    // symbol: ?_getPerItemCost@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
    MCAPI uint _getPerItemCost(class ItemStack const&, class ItemStackBase const&) const;

    // symbol: ?_storeItemInNewOrExistingSlot@StorageItemComponent@@AEBAXAEAVItemStack@@0I@Z
    MCAPI void _storeItemInNewOrExistingSlot(class ItemStack& item, class ItemStack&, uint) const;

    // symbol: ?_updateRemainingWeight@StorageItemComponent@@AEBAXAEAVItemStack@@AEBV2@H@Z
    MCAPI void _updateRemainingWeight(class ItemStack& item, class ItemStack const&, int count) const;

    // NOLINTEND
};
