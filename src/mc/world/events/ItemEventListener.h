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
    // vIndex: 0, symbol: __gen_??1ItemEventListener@@UEAA@XZ
    virtual ~ItemEventListener() = default;

    // vIndex: 1, symbol: ?onInventoryItemOpened@ItemEventListener@@UEAA?AW4EventResult@@_N@Z
    virtual ::EventResult onInventoryItemOpened(bool workbench);

    // vIndex: 2, symbol: ?onInventoryItemClosed@ItemEventListener@@UEAA?AW4EventResult@@XZ
    virtual ::EventResult onInventoryItemClosed();

    // vIndex: 3, symbol:
    // ?onItemTransferredFromContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::EventResult
    onItemTransferredFromContainer(class ItemStackBase const& item, std::string const& srcContainerName);

    // vIndex: 4, symbol:
    // ?onItemTransferredToContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::EventResult
    onItemTransferredToContainer(class ItemStackBase const& item, std::string const& dstContainerName);

    // vIndex: 5, symbol:
    // ?onPreviewItemPopulatedInContainer@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::EventResult
    onPreviewItemPopulatedInContainer(class ItemStackBase const& item, std::string const& containerName);

    // vIndex: 6, symbol: ?onInventoryLayoutSelected@ItemEventListener@@UEAA?AW4EventResult@@HH@Z
    virtual ::EventResult onInventoryLayoutSelected(int activeInventoryLayout, int activeInventoryLeftTabIndex);

    // vIndex: 7, symbol:
    // ?onInventoryItemCraftedAutomaticallyByRecipe@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
    virtual ::EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const& item);

    // vIndex: 8, symbol: ?onRecipeSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
    virtual ::EventResult onRecipeSelected(class ItemStackBase const& item);

    // vIndex: 9, symbol: ?onItemSmelted@ItemEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVItemDescriptor@@1@Z
    virtual ::EventResult
    onItemSmelted(class Player& player, class ItemDescriptor const& item, class ItemDescriptor const& lastFuelItem);

    // vIndex: 10, symbol: ?onItemSpawningActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVActor@@@Z
    virtual ::EventResult onItemSpawningActor(class Actor const&);

    // vIndex: 11, symbol: ?onItemSpawnedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z
    virtual ::EventResult onItemSpawnedActor(class ItemStackBase const& item, class Actor const& spawnedActor);

    // vIndex: 12, symbol: ?onItemModifiedActor@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBVActor@@@Z
    virtual ::EventResult onItemModifiedActor(class ItemStackBase const& item, class Actor const& modifiedActor);

    // vIndex: 13, symbol: ?onItemSelectedSlot@ItemEventListener@@UEAA?AW4EventResult@@H@Z
    virtual ::EventResult onItemSelectedSlot(int slot);

    // vIndex: 14, symbol: ?onItemSelected@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@@Z
    virtual ::EventResult onItemSelected(class ItemStackBase const&);

    // vIndex: 15, symbol:
    // ?onItemDefinitionEventTriggered@ItemEventListener@@UEAA?AW4EventResult@@AEBVItemStackBase@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual ::EventResult onItemDefinitionEventTriggered(class ItemStackBase const& item, std::string const& event);

    // vIndex: 16, symbol: ?onEvent@ItemEventListener@@UEAA?AW4EventResult@@AEBUItemNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ItemNotificationEvent const&);

    // NOLINTEND
};
