/**
 * @file  StorageItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class StorageItemComponent.
 *
 */
class StorageItemComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STORAGEITEMCOMPONENT
public:
    class StorageItemComponent& operator=(class StorageItemComponent const &) = delete;
    StorageItemComponent(class StorageItemComponent const &) = delete;
    StorageItemComponent() = delete;
#endif

public:
    /**
     * @hash   -856523994
     * @symbol  ?calculateAddableCount\@StorageItemComponent\@\@QEBAIAEBVItemStack\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI unsigned int calculateAddableCount(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @hash   1875312468
     * @symbol  ?tryAddItemStack\@StorageItemComponent\@\@QEBA_NAEAVItemStack\@\@0\@Z
     */
    MCAPI bool tryAddItemStack(class ItemStack &, class ItemStack &) const;
    /**
     * @hash   1602451260
     * @symbol  ?tryGenerateUserData\@StorageItemComponent\@\@QEBAXAEAVItemStack\@\@\@Z
     */
    MCAPI void tryGenerateUserData(class ItemStack &) const;
    /**
     * @hash   501305474
     * @symbol  ?tryRemoveItemStack\@StorageItemComponent\@\@QEBA?AVItemStack\@\@AEAV2\@\@Z
     */
    MCAPI class ItemStack tryRemoveItemStack(class ItemStack &) const;
    /**
     * @hash   718370180
     * @symbol  ?tryRemoveOneFromItemStack\@StorageItemComponent\@\@QEBA?AVItemStack\@\@AEAV2\@\@Z
     */
    MCAPI class ItemStack tryRemoveOneFromItemStack(class ItemStack &) const;
    /**
     * @hash   1283319096
     * @symbol  ?use\@StorageItemComponent\@\@QEBA_NAEAVItemStack\@\@AEAVPlayer\@\@\@Z
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
    /**
     * @hash   -1059921351
     * @symbol  ?DEFAULT_MAX_CARRY_WEIGHT\@StorageItemComponent\@\@2IB
     */
    MCAPI static unsigned int const DEFAULT_MAX_CARRY_WEIGHT;
    /**
     * @hash   1711900627
     * @symbol  ?bindType\@StorageItemComponent\@\@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   -1443781158
     * @symbol  ?getIdentifier\@StorageItemComponent\@\@SAAEBVHashedString\@\@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @hash   911008598
     * @symbol  ?_calculateAddableCountForBasicStorage\@StorageItemComponent\@\@AEBAIAEBVItemStack\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI unsigned int _calculateAddableCountForBasicStorage(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @hash   -567370400
     * @symbol  ?_getItemListSize\@StorageItemComponent\@\@AEBAIAEAVItemStack\@\@\@Z
     */
    MCAPI unsigned int _getItemListSize(class ItemStack &) const;
    /**
     * @hash   1888017873
     * @symbol  ?_getPerItemCost\@StorageItemComponent\@\@AEBAIAEBVItemStack\@\@AEBVItemStackBase\@\@\@Z
     */
    MCAPI unsigned int _getPerItemCost(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @hash   1098406586
     * @symbol  ?_storeItemInNewOrExistingSlot\@StorageItemComponent\@\@AEBAXAEAVItemStack\@\@0I\@Z
     */
    MCAPI void _storeItemInNewOrExistingSlot(class ItemStack &, class ItemStack &, unsigned int) const;
    /**
     * @hash   -1344465010
     * @symbol  ?_updateRemainingWeight\@StorageItemComponent\@\@AEBAXAEAVItemStack\@\@AEBV2\@H\@Z
     */
    MCAPI void _updateRemainingWeight(class ItemStack &, class ItemStack const &, int) const;

private:

};