#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/ItemGameplayEvent.h"
#include "mc/world/events/MutableItemGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemDescriptor;
class ItemEventListener;
class ItemGameplayHandler;
class ItemStackBase;
class Player;
// clang-format on

class ItemEventCoordinator : public ::EventCoordinator<::ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemGameplayHandler>> mItemGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ItemEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemEventCoordinator();

    MCFOLD ::ItemGameplayHandler& getItemGameplayHandler();

#ifdef LL_PLAT_C
    MCAPI void onInventoryItemClosed();

    MCAPI void onInventoryItemCraftedAutomaticallyByRecipe(::ItemStackBase const& item);

    MCAPI void onInventoryItemOpened(bool workbench);

    MCAPI void onInventoryLayoutSelected(int activeInventoryLayout, int activeInventoryLeftTabIndex);
#endif

    MCAPI void onItemModifiedActor(::ItemStackBase const& item, ::Actor const& modifiedActor);

#ifdef LL_PLAT_C
    MCAPI void onItemSelected(::ItemStackBase const& item);

    MCAPI void onItemSelectedSlot(int slot);

    MCAPI void onItemSmelted(
        ::Player&               player,
        ::ItemDescriptor const& itemDescriptor,
        ::ItemDescriptor const& lastFuelItemDescriptor
    );
#endif

    MCAPI void onItemSpawnedActor(::ItemStackBase const& item, ::Actor const& spawnedActor);

#ifdef LL_PLAT_C
    MCAPI void onItemTransferredFromContainer(::ItemStackBase const& item, ::std::string const& srcContainerName);

    MCAPI void onItemTransferredToContainer(::ItemStackBase const& item, ::std::string const& dstContainerName);

    MCAPI void onPreviewItemPopulatedInContainer(::ItemStackBase const& item, ::std::string const& destContainerName);

    MCAPI void onRecipeSelected(::ItemStackBase const& item);
#endif

    MCFOLD void registerItemGameplayHandler(::std::unique_ptr<::ItemGameplayHandler> handler);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableItemGameplayEvent<::CoordinatorResult>> event);

#ifdef LL_PLAT_C
    MCAPI void sendEvent(::EventRef<::ItemGameplayEvent<void>> const& event);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
