/**
 * @file  ItemEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemEventListener.
 *
 */
class ItemEventListener {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMEVENTLISTENER
public:
    class ItemEventListener& operator=(class ItemEventListener const &) = delete;
    ItemEventListener(class ItemEventListener const &) = delete;
    ItemEventListener() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMEVENTLISTENER
    /**
     * @hash   -675411360
     * @symbol ?onEvent@ItemEventListener@@UEAA?AW4EventResult@@AEBUItemNotificationEvent@@@Z
     */
    MCVAPI enum EventResult onEvent(struct ItemNotificationEvent const &);
    /**
     * @hash   -348819279
     * @symbol ?onInventoryItemClosed@ItemEventListener@@UEAA?AW4EventResult@@XZ
     */
    MCVAPI enum EventResult onInventoryItemClosed();
    /**
     * @hash   977026197
     * @symbol ?onInventoryItemCraftedAutomaticallyByRecipe@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
     */
    MCVAPI enum EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const &);
    /**
     * @hash   53180894
     * @symbol ?onInventoryItemOpened@ItemEventListener@@UEAA?AW4EventResult@@_N@Z
     */
    MCVAPI enum EventResult onInventoryItemOpened(bool);
    /**
     * @hash   -1867944169
     * @symbol ?onInventoryLayoutSelected@ItemEventListener@@UEAA?AW4EventResult@@HH@Z
     */
    MCVAPI enum EventResult onInventoryLayoutSelected(int, int);
    /**
     * @hash   47585504
     * @symbol ?onItemDefinitionEventTriggered@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI enum EventResult onItemDefinitionEventTriggered(class ItemStackBase const &, std::string const &);
    /**
     * @hash   -275760320
     * @symbol ?onItemModifiedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z
     */
    MCVAPI enum EventResult onItemModifiedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @hash   -1030823903
     * @symbol ?onItemSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
     */
    MCVAPI enum EventResult onItemSelected(class ItemStackBase const &);
    /**
     * @hash   1096183215
     * @symbol ?onItemSelectedSlot@ItemEventListener@@UEAA?AW4EventResult@@H@Z
     */
    MCVAPI enum EventResult onItemSelectedSlot(int);
    /**
     * @hash   998996006
     * @symbol ?onItemSmelted@ItemEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@1@Z
     */
    MCVAPI enum EventResult onItemSmelted(class Player &, class ItemDescriptor const &, class ItemDescriptor const &);
    /**
     * @hash   -1428049389
     * @symbol ?onItemSpawnedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z
     */
    MCVAPI enum EventResult onItemSpawnedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @hash   -1006746973
     * @symbol ?onItemSpawningActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVActor@@@Z
     */
    MCVAPI enum EventResult onItemSpawningActor(class Actor const &);
    /**
     * @hash   -790379071
     * @symbol ?onItemTransferredFromContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI enum EventResult onItemTransferredFromContainer(class ItemStackBase const &, std::string const &);
    /**
     * @hash   1020823536
     * @symbol ?onItemTransferredToContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI enum EventResult onItemTransferredToContainer(class ItemStackBase const &, std::string const &);
    /**
     * @hash   1126550236
     * @symbol ?onPreviewItemPopulatedInContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI enum EventResult onPreviewItemPopulatedInContainer(class ItemStackBase const &, std::string const &);
    /**
     * @hash   1807681702
     * @symbol ?onRecipeSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
     */
    MCVAPI enum EventResult onRecipeSelected(class ItemStackBase const &);
#endif

};