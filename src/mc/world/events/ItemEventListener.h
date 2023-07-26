#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEventListener {

public:
    // prevent constructor by default
    ItemEventListener& operator=(ItemEventListener const&) = delete;
    ItemEventListener(ItemEventListener const&)            = delete;
    ItemEventListener()                                    = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMEVENTLISTENER
    /**
     * @symbol ?onEvent\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBUItemNotificationEvent\@\@\@Z
     */
    MCVAPI enum class EventResult onEvent(struct ItemNotificationEvent const&); // NOLINT
    /**
     * @symbol ?onInventoryItemClosed\@ItemEventListener\@\@UEAA?AW4EventResult\@\@XZ
     */
    MCVAPI enum class EventResult onInventoryItemClosed(); // NOLINT
    /**
     * @symbol
     * ?onInventoryItemCraftedAutomaticallyByRecipe\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?onInventoryItemOpened\@ItemEventListener\@\@UEAA?AW4EventResult\@\@_N\@Z
     */
    MCVAPI enum class EventResult onInventoryItemOpened(bool); // NOLINT
    /**
     * @symbol ?onInventoryLayoutSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@HH\@Z
     */
    MCVAPI enum class EventResult onInventoryLayoutSelected(int, int); // NOLINT
    /**
     * @symbol
     * ?onItemDefinitionEventTriggered\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult
    onItemDefinitionEventTriggered(class ItemStackBase const&, std::string const&); // NOLINT
    /**
     * @symbol ?onItemModifiedActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemModifiedActor(class ItemStackBase const&, class Actor const&); // NOLINT
    /**
     * @symbol ?onItemSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSelected(class ItemStackBase const&); // NOLINT
    /**
     * @symbol ?onItemSelectedSlot\@ItemEventListener\@\@UEAA?AW4EventResult\@\@H\@Z
     */
    MCVAPI enum class EventResult onItemSelectedSlot(int); // NOLINT
    /**
     * @symbol ?onItemSmelted\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@1\@Z
     */
    MCVAPI enum class EventResult
    onItemSmelted(class Player&, class ItemDescriptor const&, class ItemDescriptor const&); // NOLINT
    /**
     * @symbol ?onItemSpawnedActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSpawnedActor(class ItemStackBase const&, class Actor const&); // NOLINT
    /**
     * @symbol ?onItemSpawningActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSpawningActor(class Actor const&); // NOLINT
    /**
     * @symbol
     * ?onItemTransferredFromContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult
    onItemTransferredFromContainer(class ItemStackBase const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?onItemTransferredToContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult
    onItemTransferredToContainer(class ItemStackBase const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?onPreviewItemPopulatedInContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult
    onPreviewItemPopulatedInContainer(class ItemStackBase const&, std::string const&); // NOLINT
    /**
     * @symbol ?onRecipeSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onRecipeSelected(class ItemStackBase const&); // NOLINT
#endif
};
