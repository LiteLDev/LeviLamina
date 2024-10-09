#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/lifetime_registry/TypedObjectHandle.h"
#include "mc/world/events/EventResult.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemStackBase;
class Player;
namespace ScriptModuleMinecraft { class IScriptWorldAfterEvents; }
namespace Scripting { class WeakLifetimeScope; }
struct ItemCompleteUseEvent;
struct ItemNotificationEvent;
struct ItemReleaseUseEvent;
struct ItemStartUseEvent;
struct ItemStartUseOnEvent;
struct ItemStopUseEvent;
struct ItemStopUseOnEvent;
struct ItemUseEvent;
struct ItemUsedOnEvent;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptItemEventListener {
public:
    // prevent constructor by default
    ScriptItemEventListener& operator=(ScriptItemEventListener const&);
    ScriptItemEventListener(ScriptItemEventListener const&);
    ScriptItemEventListener();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ScriptItemEventListener() = default;

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
    virtual ::EventResult onEvent(struct ItemUseEvent const& itemEvent);

    // vIndex: 17
    virtual ::EventResult onEvent(struct ItemUsedOnEvent const& itemEvent);

    // vIndex: 18
    virtual ::EventResult onEvent(struct ItemStartUseOnEvent const& itemEvent);

    // vIndex: 19
    virtual ::EventResult onEvent(struct ItemStopUseOnEvent const& itemEvent);

    // vIndex: 20
    virtual ::EventResult onEvent(struct ItemStartUseEvent const& itemEvent);

    // vIndex: 21
    virtual ::EventResult onEvent(struct ItemCompleteUseEvent const& itemEvent);

    // vIndex: 22
    virtual ::EventResult onEvent(struct ItemReleaseUseEvent const& itemEvent);

    // vIndex: 23
    virtual ::EventResult onEvent(struct ItemStopUseEvent const& itemEvent);

    // vIndex: 24
    virtual ::EventResult onEvent(struct ItemNotificationEvent const& event);

    MCAPI ScriptItemEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
