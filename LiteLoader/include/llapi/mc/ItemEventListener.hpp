/**
 * @file  ItemEventListener.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -569470720
     * @symbol  ?onEvent\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBUItemNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ItemNotificationEvent const &);
    /**
     * @hash   -242878639
     * @symbol  ?onInventoryItemClosed\@ItemEventListener\@\@UEAA?AW4EventResult\@\@XZ
     */
    MCVAPI enum class EventResult onInventoryItemClosed();
    /**
     * @hash   1082966837
     * @symbol  ?onInventoryItemCraftedAutomaticallyByRecipe\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const &);
    /**
     * @hash   159121534
     * @symbol  ?onInventoryItemOpened\@ItemEventListener\@\@UEAA?AW4EventResult\@\@_N\@Z
     */
    MCVAPI enum class EventResult onInventoryItemOpened(bool);
    /**
     * @hash   -1762003529
     * @symbol  ?onInventoryLayoutSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@HH\@Z
     */
    MCVAPI enum class EventResult onInventoryLayoutSelected(int, int);
    /**
     * @hash   153526144
     * @symbol  ?onItemDefinitionEventTriggered\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemDefinitionEventTriggered(class ItemStackBase const &, std::string const &);
    /**
     * @hash   -169819680
     * @symbol  ?onItemModifiedActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemModifiedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @hash   -924883263
     * @symbol  ?onItemSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSelected(class ItemStackBase const &);
    /**
     * @hash   1202123855
     * @symbol  ?onItemSelectedSlot\@ItemEventListener\@\@UEAA?AW4EventResult\@\@H\@Z
     */
    MCVAPI enum class EventResult onItemSelectedSlot(int);
    /**
     * @hash   1104936646
     * @symbol  ?onItemSmelted\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@1\@Z
     */
    MCVAPI enum class EventResult onItemSmelted(class Player &, class ItemDescriptor const &, class ItemDescriptor const &);
    /**
     * @hash   -1322108749
     * @symbol  ?onItemSpawnedActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSpawnedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @hash   -900806333
     * @symbol  ?onItemSpawningActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSpawningActor(class Actor const &);
    /**
     * @hash   -684438431
     * @symbol  ?onItemTransferredFromContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemTransferredFromContainer(class ItemStackBase const &, std::string const &);
    /**
     * @hash   1126764176
     * @symbol  ?onItemTransferredToContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemTransferredToContainer(class ItemStackBase const &, std::string const &);
    /**
     * @hash   1232490876
     * @symbol  ?onPreviewItemPopulatedInContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onPreviewItemPopulatedInContainer(class ItemStackBase const &, std::string const &);
    /**
     * @hash   1913622342
     * @symbol  ?onRecipeSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onRecipeSelected(class ItemStackBase const &);
#endif

};