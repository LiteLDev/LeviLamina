#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MutableItemGameplayEvent.h"
#include "mc/world/events/EventRef.h"

class ItemEventCoordinator {

public:
    // prevent constructor by default
    ItemEventCoordinator& operator=(ItemEventCoordinator const&) = delete;
    ItemEventCoordinator(ItemEventCoordinator const&)            = delete;

public:
    /**
     * @symbol ??0ItemEventCoordinator\@\@QEAA\@XZ
     */
    MCAPI ItemEventCoordinator(); // NOLINT
    /**
     * @symbol ?getItemGameplayHandler\@ItemEventCoordinator\@\@QEAAAEAVItemGameplayHandler\@\@XZ
     */
    MCAPI class ItemGameplayHandler& getItemGameplayHandler(); // NOLINT
    /**
     * @symbol ?onItemModifiedActor\@ItemEventCoordinator\@\@QEAAXAEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCAPI void onItemModifiedActor(class ItemStackBase const&, class Actor const&); // NOLINT
    /**
     * @symbol ?onItemSpawnedActor\@ItemEventCoordinator\@\@QEAAXAEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCAPI void onItemSpawnedActor(class ItemStackBase const&, class Actor const&); // NOLINT
    /**
     * @symbol
     * ?registerItemGameplayHandler\@ItemEventCoordinator\@\@QEAAXV?$unique_ptr\@VItemGameplayHandler\@\@U?$default_delete\@VItemGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerItemGameplayHandler(std::unique_ptr<class ItemGameplayHandler>); // NOLINT
    /**
     * @symbol
     * ?sendEvent\@ItemEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableItemGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult
        sendEvent(class EventRef<struct MutableItemGameplayEvent<enum class CoordinatorResult>>); // NOLINT
};
