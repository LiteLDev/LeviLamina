#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventCoordinator.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableItemGameplayEvent.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ItemEventListener;
class ItemGameplayHandler;
class ItemStackBase;
// clang-format on

class ItemEventCoordinator : public ::EventCoordinator<::ItemEventListener> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk680110;
    // NOLINTEND

public:
    // prevent constructor by default
    ItemEventCoordinator& operator=(ItemEventCoordinator const&);
    ItemEventCoordinator(ItemEventCoordinator const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ItemEventCoordinator();

    MCAPI ::ItemGameplayHandler& getItemGameplayHandler();

    MCAPI void onItemModifiedActor(::ItemStackBase const& item, ::Actor const& modifiedActor);

    MCAPI void onItemSpawnedActor(::ItemStackBase const& item, ::Actor const& spawnedActor);

    MCAPI void registerItemGameplayHandler(::std::unique_ptr<::ItemGameplayHandler> handler);

    MCAPI ::CoordinatorResult sendEvent(::EventRef<::MutableItemGameplayEvent<::CoordinatorResult>> event);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
