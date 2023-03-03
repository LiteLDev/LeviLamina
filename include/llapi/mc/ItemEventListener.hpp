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
     * @symbol  ?onEvent\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBUItemNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ItemNotificationEvent const &);
    /**
     * @symbol  ?onInventoryItemClosed\@ItemEventListener\@\@UEAA?AW4EventResult\@\@XZ
     */
    MCVAPI enum class EventResult onInventoryItemClosed();
    /**
     * @symbol  ?onInventoryItemCraftedAutomaticallyByRecipe\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const &);
    /**
     * @symbol  ?onInventoryItemOpened\@ItemEventListener\@\@UEAA?AW4EventResult\@\@_N\@Z
     */
    MCVAPI enum class EventResult onInventoryItemOpened(bool);
    /**
     * @symbol  ?onInventoryLayoutSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@HH\@Z
     */
    MCVAPI enum class EventResult onInventoryLayoutSelected(int, int);
    /**
     * @symbol  ?onItemDefinitionEventTriggered\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemDefinitionEventTriggered(class ItemStackBase const &, std::string const &);
    /**
     * @symbol  ?onItemModifiedActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemModifiedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @symbol  ?onItemSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSelected(class ItemStackBase const &);
    /**
     * @symbol  ?onItemSelectedSlot\@ItemEventListener\@\@UEAA?AW4EventResult\@\@H\@Z
     */
    MCVAPI enum class EventResult onItemSelectedSlot(int);
    /**
     * @symbol  ?onItemSmelted\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@1\@Z
     */
    MCVAPI enum class EventResult onItemSmelted(class Player &, class ItemDescriptor const &, class ItemDescriptor const &);
    /**
     * @symbol  ?onItemSpawnedActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSpawnedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @symbol  ?onItemSpawningActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSpawningActor(class Actor const &);
    /**
     * @symbol  ?onItemTransferredFromContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemTransferredFromContainer(class ItemStackBase const &, std::string const &);
    /**
     * @symbol  ?onItemTransferredToContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemTransferredToContainer(class ItemStackBase const &, std::string const &);
    /**
     * @symbol  ?onPreviewItemPopulatedInContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onPreviewItemPopulatedInContainer(class ItemStackBase const &, std::string const &);
    /**
     * @symbol  ?onRecipeSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onRecipeSelected(class ItemStackBase const &);
#endif

};