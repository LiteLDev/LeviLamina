#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemEventListener {

public:
    // prevent constructor by default
    ItemEventListener& operator=(ItemEventListener const&) = delete;
    ItemEventListener(ItemEventListener const&)            = delete;
    ItemEventListener()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol __unk_vfn_2
     */
    virtual void __unk_vfn_2();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl 5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl 8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl 9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl 10
     * @symbol __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl 11
     * @symbol __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl 12
     * @symbol __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl 13
     * @symbol __unk_vfn_13
     */
    virtual void __unk_vfn_13();
    /**
     * @vftbl 14
     * @symbol __unk_vfn_14
     */
    virtual void __unk_vfn_14();
    /**
     * @vftbl 15
     * @symbol __unk_vfn_15
     */
    virtual void __unk_vfn_15();
    /**
     * @vftbl 16
     * @symbol ?onEvent\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBUItemNotificationEvent\@\@\@Z
     */
    virtual enum class EventResult onEvent(struct ItemNotificationEvent const&);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ITEMEVENTLISTENER
    /**
     * @symbol ?onInventoryItemClosed\@ItemEventListener\@\@UEAA?AW4EventResult\@\@XZ
     */
    MCVAPI enum class EventResult onInventoryItemClosed();
    /**
     * @symbol
     * ?onInventoryItemCraftedAutomaticallyByRecipe\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const&);
    /**
     * @symbol ?onInventoryItemOpened\@ItemEventListener\@\@UEAA?AW4EventResult\@\@_N\@Z
     */
    MCVAPI enum class EventResult onInventoryItemOpened(bool);
    /**
     * @symbol ?onInventoryLayoutSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@HH\@Z
     */
    MCVAPI enum class EventResult onInventoryLayoutSelected(int, int);
    /**
     * @symbol
     * ?onItemDefinitionEventTriggered\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemDefinitionEventTriggered(class ItemStackBase const&, std::string const&);
    /**
     * @symbol ?onItemModifiedActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemModifiedActor(class ItemStackBase const&, class Actor const&);
    /**
     * @symbol ?onItemSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSelected(class ItemStackBase const&);
    /**
     * @symbol ?onItemSelectedSlot\@ItemEventListener\@\@UEAA?AW4EventResult\@\@H\@Z
     */
    MCVAPI enum class EventResult onItemSelectedSlot(int);
    /**
     * @symbol ?onItemSmelted\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEAVPlayer\@\@AEBVItemDescriptor\@\@1\@Z
     */
    MCVAPI enum class EventResult
    onItemSmelted(class Player&, class ItemDescriptor const&, class ItemDescriptor const&);
    /**
     * @symbol ?onItemSpawnedActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSpawnedActor(class ItemStackBase const&, class Actor const&);
    /**
     * @symbol ?onItemSpawningActor\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVActor\@\@\@Z
     */
    MCVAPI enum class EventResult onItemSpawningActor(class Actor const&);
    /**
     * @symbol
     * ?onItemTransferredFromContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemTransferredFromContainer(class ItemStackBase const&, std::string const&);
    /**
     * @symbol
     * ?onItemTransferredToContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onItemTransferredToContainer(class ItemStackBase const&, std::string const&);
    /**
     * @symbol
     * ?onPreviewItemPopulatedInContainer\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI enum class EventResult onPreviewItemPopulatedInContainer(class ItemStackBase const&, std::string const&);
    /**
     * @symbol ?onRecipeSelected\@ItemEventListener\@\@UEAA?AW4EventResult\@\@AEBVItemStackBase\@\@\@Z
     */
    MCVAPI enum class EventResult onRecipeSelected(class ItemStackBase const&);
#endif
    // NOLINTEND
};
