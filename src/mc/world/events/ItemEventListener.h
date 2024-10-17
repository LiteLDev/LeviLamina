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
    // vIndex: 0
    virtual ~ItemEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onInventoryItemOpened(bool workbench);

    // vIndex: 2
    virtual ::EventResult onInventoryItemClosed();

    // vIndex: 3
    virtual ::EventResult
    onItemTransferredFromContainer(class ItemStackBase const& item, std::string const& srcContainerName);

    // vIndex: 4
    virtual ::EventResult
    onItemTransferredToContainer(class ItemStackBase const& item, std::string const& dstContainerName);

    // vIndex: 5
    virtual ::EventResult
    onPreviewItemPopulatedInContainer(class ItemStackBase const& item, std::string const& containerName);

    // vIndex: 6
    virtual ::EventResult onInventoryLayoutSelected(int activeInventoryLayout, int activeInventoryLeftTabIndex);

    // vIndex: 7
    virtual ::EventResult onInventoryItemCraftedAutomaticallyByRecipe(class ItemStackBase const& item);

    // vIndex: 8
    virtual ::EventResult onRecipeSelected(class ItemStackBase const& item);

    // vIndex: 9
    virtual ::EventResult
    onItemSmelted(class Player& player, class ItemDescriptor const& item, class ItemDescriptor const& lastFuelItem);

    // vIndex: 10
    virtual ::EventResult onItemSpawningActor(class Actor const& spawningActor);

    // vIndex: 11
    virtual ::EventResult onItemSpawnedActor(class ItemStackBase const& item, class Actor const& spawnedActor);

    // vIndex: 12
    virtual ::EventResult onItemModifiedActor(class ItemStackBase const& item, class Actor const& modifiedActor);

    // vIndex: 13
    virtual ::EventResult onItemSelectedSlot(int slot);

    // vIndex: 14
    virtual ::EventResult onItemSelected(class ItemStackBase const&);

    // vIndex: 15
    virtual ::EventResult onItemDefinitionEventTriggered(class ItemStackBase const& item, std::string const& event);

    // vIndex: 16
    virtual ::EventResult onEvent(struct ItemNotificationEvent const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI ::EventResult onEvent$(struct ItemNotificationEvent const&);

    MCAPI ::EventResult onInventoryItemClosed$();

    MCAPI ::EventResult onInventoryItemCraftedAutomaticallyByRecipe$(class ItemStackBase const& item);

    MCAPI ::EventResult onInventoryItemOpened$(bool workbench);

    MCAPI ::EventResult onInventoryLayoutSelected$(int activeInventoryLayout, int activeInventoryLeftTabIndex);

    MCAPI ::EventResult onItemDefinitionEventTriggered$(class ItemStackBase const& item, std::string const& event);

    MCAPI ::EventResult onItemModifiedActor$(class ItemStackBase const& item, class Actor const& modifiedActor);

    MCAPI ::EventResult onItemSelected$(class ItemStackBase const&);

    MCAPI ::EventResult onItemSelectedSlot$(int slot);

    MCAPI ::EventResult
    onItemSmelted$(class Player& player, class ItemDescriptor const& item, class ItemDescriptor const& lastFuelItem);

    MCAPI ::EventResult onItemSpawnedActor$(class ItemStackBase const& item, class Actor const& spawnedActor);

    MCAPI ::EventResult onItemSpawningActor$(class Actor const& spawningActor);

    MCAPI ::EventResult
    onItemTransferredFromContainer$(class ItemStackBase const& item, std::string const& srcContainerName);

    MCAPI ::EventResult
    onItemTransferredToContainer$(class ItemStackBase const& item, std::string const& dstContainerName);

    MCAPI ::EventResult
    onPreviewItemPopulatedInContainer$(class ItemStackBase const& item, std::string const& containerName);

    MCAPI ::EventResult onRecipeSelected$(class ItemStackBase const& item);

    // NOLINTEND
};
