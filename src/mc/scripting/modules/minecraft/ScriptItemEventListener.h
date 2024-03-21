#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/TypedObjectHandle.h"
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
    // vIndex: 0, symbol: __gen_??1ScriptItemEventListener@ScriptModuleMinecraft@@UEAA@XZ
    virtual ~ScriptItemEventListener() = default;

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

    // vIndex: 16, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemUseEvent const&);

    // vIndex: 17, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemUsedOnEvent@@@Z
    virtual ::EventResult onEvent(struct ItemUsedOnEvent const&);

    // vIndex: 18, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemStartUseOnEvent@@@Z
    virtual ::EventResult onEvent(struct ItemStartUseOnEvent const&);

    // vIndex: 19, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemStopUseOnEvent@@@Z
    virtual ::EventResult onEvent(struct ItemStopUseOnEvent const&);

    // vIndex: 20, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemStartUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemStartUseEvent const&);

    // vIndex: 21, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemCompleteUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemCompleteUseEvent const&);

    // vIndex: 22, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemReleaseUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemReleaseUseEvent const&);

    // vIndex: 23, symbol:
    // ?onEvent@ScriptItemEventListener@ScriptModuleMinecraft@@UEAA?AW4EventResult@@AEBUItemStopUseEvent@@@Z
    virtual ::EventResult onEvent(struct ItemStopUseEvent const&);

    // vIndex: 24, symbol:
    // ?onEvent@?$EventListenerDispatcher@VItemEventListener@@@@MEAA?AW4EventResult@@AEBUItemNotificationEvent@@@Z
    virtual ::EventResult onEvent(struct ItemNotificationEvent const& event);

    // symbol:
    // ??0ScriptItemEventListener@ScriptModuleMinecraft@@QEAA@AEBVWeakLifetimeScope@Scripting@@U?$TypedObjectHandle@VIScriptWorldAfterEvents@ScriptModuleMinecraft@@@3@@Z
    MCAPI ScriptItemEventListener(
        class Scripting::WeakLifetimeScope const&                                                 scope,
        struct Scripting::TypedObjectHandle<class ScriptModuleMinecraft::IScriptWorldAfterEvents> handle
    );

    // NOLINTEND
};

}; // namespace ScriptModuleMinecraft
