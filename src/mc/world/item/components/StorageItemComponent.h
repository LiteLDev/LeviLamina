#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StorageItemComponent {

public:
    // prevent constructor by default
    StorageItemComponent& operator=(StorageItemComponent const&) = delete;
    StorageItemComponent(StorageItemComponent const&)            = delete;
    StorageItemComponent()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?calculateAddableCount\@StorageItemComponent\@\@QEBAIAEBVItemStack\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI unsigned int calculateAddableCount(class ItemStack const&, class ItemStackBase const&) const;
    /**
     * @symbol ?getIdentifier\@StorageItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const& getIdentifier();
    /**
     * @symbol ?tryAddItemStack\@StorageItemComponent\@\@QEBA_NAEAVItemStack\@\@0\@Z
     */
    MCAPI bool tryAddItemStack(class ItemStack&, class ItemStack&) const;
    /**
     * @symbol ?tryGenerateUserData\@StorageItemComponent\@\@QEBAXAEAVItemStack\@\@\@Z
     */
    MCAPI void tryGenerateUserData(class ItemStack&) const;
    /**
     * @symbol ?tryRemoveItemStack\@StorageItemComponent\@\@QEBA?AVItemStack\@\@AEAV2\@\@Z
     */
    MCAPI class ItemStack tryRemoveItemStack(class ItemStack&) const;
    /**
     * @symbol ?tryRemoveOneFromItemStack\@StorageItemComponent\@\@QEBA?AVItemStack\@\@AEAV2\@\@Z
     */
    MCAPI class ItemStack tryRemoveOneFromItemStack(class ItemStack&) const;
    /**
     * @symbol ?use\@StorageItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack&, class Player&) const;
    /**
     * @symbol ?DEFAULT_MAX_CARRY_WEIGHT\@StorageItemComponent\@\@2IB
     */
    MCAPI static unsigned int const DEFAULT_MAX_CARRY_WEIGHT;
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?_calculateAddableCountForBasicStorage\@StorageItemComponent\@\@AEBAIAEBVItemStack\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI unsigned int _calculateAddableCountForBasicStorage(class ItemStack const&, class ItemStackBase const&) const;
    /**
     * @symbol ?_getItemListSize\@StorageItemComponent\@\@AEBAIAEAVItemStack\@\@\@Z
     */
    MCAPI unsigned int _getItemListSize(class ItemStack&) const;
    /**
     * @symbol ?_getPerItemCost\@StorageItemComponent\@\@AEBAIAEBVItemStack\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI unsigned int _getPerItemCost(class ItemStack const&, class ItemStackBase const&) const;
    /**
     * @symbol ?_storeItemInNewOrExistingSlot\@StorageItemComponent\@\@AEBAXAEAVItemStack\@\@0I\@Z
     */
    MCAPI void _storeItemInNewOrExistingSlot(class ItemStack&, class ItemStack&, unsigned int) const;
    /**
     * @symbol ?_updateRemainingWeight\@StorageItemComponent\@\@AEBAXAEAVItemStack\@\@AEBV2\@H\@Z
     */
    MCAPI void _updateRemainingWeight(class ItemStack&, class ItemStack const&, int) const;
    // NOLINTEND
};
