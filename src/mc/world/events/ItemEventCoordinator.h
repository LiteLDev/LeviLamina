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
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ItemGameplayHandler>> mItemGameplayHandler;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onItemSpawnedActor(::ItemStackBase const& item, ::Actor const& spawnedActor);

    MCNAPI void registerItemGameplayHandler(::std::unique_ptr<::ItemGameplayHandler> handler);

    MCNAPI ::CoordinatorResult sendEvent(::EventRef<::MutableItemGameplayEvent<::CoordinatorResult>> event);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
