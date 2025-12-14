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
    virtual ~ItemEventListener() = default;

    virtual ::EventResult onInventoryItemOpened(bool workbench);

    virtual ::EventResult onInventoryItemClosed();

    virtual ::EventResult
    onItemTransferredFromContainer(::ItemStackBase const& item, ::std::string const& srcContainerName);

    virtual ::EventResult
    onItemTransferredToContainer(::ItemStackBase const& item, ::std::string const& dstContainerName);

    virtual ::EventResult
    onPreviewItemPopulatedInContainer(::ItemStackBase const& item, ::std::string const& containerName);

    virtual ::EventResult onInventoryLayoutSelected(int activeInventoryLayout, int activeInventoryLeftTabIndex);

    virtual ::EventResult onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const& item);

    virtual ::EventResult onRecipeSelected(::ItemStackBase const& item);

    virtual ::EventResult
    onItemSmelted(::Player& player, ::ItemDescriptor const& item, ::ItemDescriptor const& lastFuelItem);

    virtual ::EventResult onItemSpawningActor(::Actor const& spawningActor);

    virtual ::EventResult onItemSpawnedActor(::ItemStackBase const& item, ::Actor const& spawnedActor);

    virtual ::EventResult onItemModifiedActor(::ItemStackBase const& item, ::Actor const& modifiedActor);

    virtual ::EventResult onItemSelectedSlot(int slot);

    virtual ::EventResult onItemSelected(::ItemStackBase const&);

    virtual ::EventResult onItemDefinitionEventTriggered(::ItemStackBase const& item, ::std::string const& event);

    virtual ::EventResult onEvent(::ItemNotificationEvent const& event);
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
