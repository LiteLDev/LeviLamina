#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gameplayhandlers/CoordinatorResult.h"
#include "mc/world/events/EventRef.h"
#include "mc/world/events/MutableItemGameplayEvent.h"

class ItemEventCoordinator {
public:
    // prevent constructor by default
    ItemEventCoordinator& operator=(ItemEventCoordinator const&);
    ItemEventCoordinator(ItemEventCoordinator const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ItemEventCoordinator() = default;

    MCAPI ItemEventCoordinator();

    MCAPI class ItemGameplayHandler& getItemGameplayHandler();

    MCAPI void onItemModifiedActor(class ItemStackBase const& item, class Actor const& modifiedActor);

    MCAPI void onItemSpawnedActor(class ItemStackBase const& item, class Actor const& spawnedActor);

    MCAPI void registerItemGameplayHandler(std::unique_ptr<class ItemGameplayHandler> handler);

    MCAPI ::CoordinatorResult sendEvent(class EventRef<struct MutableItemGameplayEvent<::CoordinatorResult>> event);

    // NOLINTEND
};
