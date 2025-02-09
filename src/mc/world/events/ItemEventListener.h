#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemStackBase;
class Player;
struct ItemNotificationEvent;
// clang-format on

class ItemEventListener {
public:
    // ItemEventListener inner types define
    using EventType = ::ItemNotificationEvent;

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemEventListener() = default;

    // vIndex: 1
    virtual ::EventResult onInventoryItemOpened(bool workbench);

    // vIndex: 2
    virtual ::EventResult onInventoryItemClosed();

    // vIndex: 3
    virtual ::EventResult
    onItemTransferredFromContainer(::ItemStackBase const& item, ::std::string const& srcContainerName);

    // vIndex: 4
    virtual ::EventResult
    onItemTransferredToContainer(::ItemStackBase const& item, ::std::string const& dstContainerName);

    // vIndex: 5
    virtual ::EventResult
    onPreviewItemPopulatedInContainer(::ItemStackBase const& item, ::std::string const& containerName);

    // vIndex: 6
    virtual ::EventResult onInventoryLayoutSelected(int activeInventoryLayout, int activeInventoryLeftTabIndex);

    // vIndex: 7
    virtual ::EventResult onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const& item);

    // vIndex: 8
    virtual ::EventResult onRecipeSelected(::ItemStackBase const& item);

    // vIndex: 9
    virtual ::EventResult
    onItemSmelted(::Player& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);

    // vIndex: 10
    virtual ::EventResult onItemSpawningActor(::Actor const& spawningActor);

    // vIndex: 11
    virtual ::EventResult onItemSpawnedActor(::ItemStackBase const& item, ::Actor const& spawnedActor);

    // vIndex: 12
    virtual ::EventResult onItemModifiedActor(::ItemStackBase const& item, ::Actor const& modifiedActor);

    // vIndex: 13
    virtual ::EventResult onItemSelectedSlot(int slot);

    // vIndex: 14
    virtual ::EventResult onItemSelected(::ItemStackBase const&);

    // vIndex: 15
    virtual ::EventResult onItemDefinitionEventTriggered(::ItemStackBase const& item, ::std::string const& event);

    // vIndex: 16
    virtual ::EventResult onEvent(::ItemNotificationEvent const& event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::EventResult $onInventoryItemOpened(bool workbench);

    MCFOLD ::EventResult $onInventoryItemClosed();

    MCFOLD ::EventResult
    $onItemTransferredFromContainer(::ItemStackBase const& item, ::std::string const& srcContainerName);

    MCFOLD ::EventResult
    $onItemTransferredToContainer(::ItemStackBase const& item, ::std::string const& dstContainerName);

    MCFOLD ::EventResult
    $onPreviewItemPopulatedInContainer(::ItemStackBase const& item, ::std::string const& containerName);

    MCFOLD ::EventResult $onInventoryLayoutSelected(int activeInventoryLayout, int activeInventoryLeftTabIndex);

    MCFOLD ::EventResult $onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const& item);

    MCFOLD ::EventResult $onRecipeSelected(::ItemStackBase const& item);

    MCFOLD ::EventResult
    $onItemSmelted(::Player& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);

    MCFOLD ::EventResult $onItemSpawningActor(::Actor const& spawningActor);

    MCFOLD ::EventResult $onItemSpawnedActor(::ItemStackBase const& item, ::Actor const& spawnedActor);

    MCFOLD ::EventResult $onItemModifiedActor(::ItemStackBase const& item, ::Actor const& modifiedActor);

    MCFOLD ::EventResult $onItemSelectedSlot(int slot);

    MCFOLD ::EventResult $onItemSelected(::ItemStackBase const&);

    MCFOLD ::EventResult $onItemDefinitionEventTriggered(::ItemStackBase const& item, ::std::string const& event);

    MCFOLD ::EventResult $onEvent(::ItemNotificationEvent const& event);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
