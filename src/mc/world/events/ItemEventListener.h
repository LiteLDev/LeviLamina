#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

class ItemEventListener {
public:
    // prevent constructor by default
    ItemEventListener& operator=(ItemEventListener const&);
    ItemEventListener(ItemEventListener const&);
    ItemEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ItemEventListener();

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1();

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2();

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3();

    // vIndex: 4, symbol: __unk_vfn_4
    virtual void __unk_vfn_4();

    // vIndex: 5, symbol: __unk_vfn_5
    virtual void __unk_vfn_5();

    // vIndex: 6, symbol: __unk_vfn_6
    virtual void __unk_vfn_6();

    // vIndex: 7, symbol: __unk_vfn_7
    virtual void __unk_vfn_7();

    // vIndex: 8, symbol: __unk_vfn_8
    virtual void __unk_vfn_8();

    // vIndex: 9, symbol: __unk_vfn_9
    virtual void __unk_vfn_9();

    // vIndex: 10, symbol: __unk_vfn_10
    virtual void __unk_vfn_10();

    // vIndex: 11, symbol: __unk_vfn_11
    virtual void __unk_vfn_11();

    // vIndex: 12, symbol: __unk_vfn_12
    virtual void __unk_vfn_12();

    // vIndex: 13, symbol: __unk_vfn_13
    virtual void __unk_vfn_13();

    // vIndex: 14, symbol: __unk_vfn_14
    virtual void __unk_vfn_14();

    // vIndex: 15, symbol: __unk_vfn_15
    virtual void __unk_vfn_15();

    // vIndex: 16, symbol: ?onEvent@ItemEventListener@@UEAA?AW4EventResult@@AEBUItemNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ItemNotificationEvent const&);

    // symbol: ?onInventoryItemClosed@ItemEventListener@@UEAA?AW4EventResult@@XZ
    MCVAPI ::EventResult onInventoryItemClosed();

    // symbol:
    // ?onInventoryItemCraftedAutomaticallyByRecipe@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
    MCVAPI ::EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const&);

    // symbol: ?onInventoryItemOpened@ItemEventListener@@UEAA?AW4EventResult@@_N@Z
    MCVAPI ::EventResult onInventoryItemOpened(bool);

    // symbol: ?onInventoryLayoutSelected@ItemEventListener@@UEAA?AW4EventResult@@HH@Z
    MCVAPI ::EventResult onInventoryLayoutSelected(int, int);

    // symbol:
    // ?onItemDefinitionEventTriggered@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI ::EventResult onItemDefinitionEventTriggered(class ItemStackBase const&, std::string const&);

    // symbol: ?onItemModifiedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z
    MCVAPI ::EventResult onItemModifiedActor(class ItemStackBase const&, class Actor const&);

    // symbol: ?onItemSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
    MCVAPI ::EventResult onItemSelected(class ItemStackBase const&);

    // symbol: ?onItemSelectedSlot@ItemEventListener@@UEAA?AW4EventResult@@H@Z
    MCVAPI ::EventResult onItemSelectedSlot(int);

    // symbol: ?onItemSmelted@ItemEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@1@Z
    MCVAPI ::EventResult onItemSmelted(class Player&, class ItemDescriptor const&, class ItemDescriptor const&);

    // symbol: ?onItemSpawnedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z
    MCVAPI ::EventResult onItemSpawnedActor(class ItemStackBase const&, class Actor const&);

    // symbol: ?onItemSpawningActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVActor@@@Z
    MCVAPI ::EventResult onItemSpawningActor(class Actor const&);

    // symbol:
    // ?onItemTransferredFromContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI ::EventResult onItemTransferredFromContainer(class ItemStackBase const&, std::string const&);

    // symbol:
    // ?onItemTransferredToContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI ::EventResult onItemTransferredToContainer(class ItemStackBase const&, std::string const&);

    // symbol:
    // ?onPreviewItemPopulatedInContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI ::EventResult onPreviewItemPopulatedInContainer(class ItemStackBase const&, std::string const&);

    // symbol: ?onRecipeSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
    MCVAPI ::EventResult onRecipeSelected(class ItemStackBase const&);

    // NOLINTEND
};
