/**
 * @file  StorageItemComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1614038010
     * @symbol ?calculateAddableCount@StorageItemComponent@@QEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
     */
    MCAPI unsigned int calculateAddableCount(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @hash   1117798452
     * @symbol ?tryAddItemStack@StorageItemComponent@@QEBA_NAEAVItemStack@@0@Z
     */
    MCAPI bool tryAddItemStack(class ItemStack &, class ItemStack &) const;
    /**
     * @hash   844937244
     * @symbol ?tryGenerateUserData@StorageItemComponent@@QEBAXAEAVItemStack@@@Z
     */
    MCAPI void tryGenerateUserData(class ItemStack &) const;
    /**
     * @hash   -256193166
     * @symbol ?tryRemoveItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
     */
    MCAPI class ItemStack tryRemoveItemStack(class ItemStack &) const;
    /**
     * @hash   -39143836
     * @symbol ?tryRemoveOneFromItemStack@StorageItemComponent@@QEBA?AVItemStack@@AEAV2@@Z
     */
    MCAPI class ItemStack tryRemoveOneFromItemStack(class ItemStack &) const;
    /**
     * @hash   525789704
     * @symbol ?use@StorageItemComponent@@QEBA_NAEAVItemStack@@AEAVPlayer@@@Z
     */
    MCAPI bool use(class ItemStack &, class Player &) const;
    /**
     * @hash   -2109010455
     * @symbol ?DEFAULT_MAX_CARRY_WEIGHT@StorageItemComponent@@2IB
     */
    MCAPI static unsigned int const DEFAULT_MAX_CARRY_WEIGHT;
    /**
     * @hash   954740259
     * @symbol ?bindType@StorageItemComponent@@SAXXZ
     */
    MCAPI static void bindType();
    /**
     * @hash   2093672122
     * @symbol ?getIdentifier@StorageItemComponent@@SAAEBVHashedString@@XZ
     */
    MCAPI static class HashedString const & getIdentifier();

//private:
    /**
     * @hash   153894358
     * @symbol ?_calculateAddableCountForBasicStorage@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
     */
    MCAPI unsigned int _calculateAddableCountForBasicStorage(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @hash   -1324515392
     * @symbol ?_getItemListSize@StorageItemComponent@@AEBAIAEAVItemStack@@@Z
     */
    MCAPI unsigned int _getItemListSize(class ItemStack &) const;
    /**
     * @hash   1130872881
     * @symbol ?_getPerItemCost@StorageItemComponent@@AEBAIAEBVItemStack@@AEBVItemStackBase@@@Z
     */
    MCAPI unsigned int _getPerItemCost(class ItemStack const &, class ItemStackBase const &) const;
    /**
     * @hash   341276970
     * @symbol ?_storeItemInNewOrExistingSlot@StorageItemComponent@@AEBAXAEAVItemStack@@0I@Z
     */
    MCAPI void _storeItemInNewOrExistingSlot(class ItemStack &, class ItemStack &, unsigned int) const;
    /**
     * @hash   -2101625378
     * @symbol ?_updateRemainingWeight@StorageItemComponent@@AEBAXAEAVItemStack@@AEBV2@H@Z
     */
    MCAPI void _updateRemainingWeight(class ItemStack &, class ItemStack const &, int) const;

private:

};