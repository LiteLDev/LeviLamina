/**
 * @file  ItemEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemEventCoordinator.
 *
 */
class ItemEventCoordinator {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMEVENTCOORDINATOR
public:
    class ItemEventCoordinator& operator=(class ItemEventCoordinator const &) = delete;
    ItemEventCoordinator(class ItemEventCoordinator const &) = delete;
#endif

public:
    /**
     * @hash   1744887205
     * @symbol ??0ItemEventCoordinator@@QEAA@XZ
     */
    MCAPI ItemEventCoordinator();
    /**
     * @hash   1731592806
     * @symbol ?getItemGameplayHandler@ItemEventCoordinator@@QEAAAEAVItemGameplayHandler@@XZ
     */
    MCAPI class ItemGameplayHandler & getItemGameplayHandler();
    /**
     * @hash   182042157
     * @symbol ?onItemModifiedActor@ItemEventCoordinator@@QEAAXAEBVItemStackBase@@AEBVActor@@@Z
     */
    MCAPI void onItemModifiedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @hash   -1732919121
     * @symbol ?onItemSpawnedActor@ItemEventCoordinator@@QEAAXAEBVItemStackBase@@AEBVActor@@@Z
     */
    MCAPI void onItemSpawnedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @hash   -372806960
     * @symbol ?registerItemGameplayHandler@ItemEventCoordinator@@QEAAXV?$unique_ptr@VItemGameplayHandler@@U?$default_delete@VItemGameplayHandler@@@std@@@std@@@Z
     */
    MCAPI void registerItemGameplayHandler(std::unique_ptr<class ItemGameplayHandler>);
    /**
     * @hash   -1330513353
     * @symbol ?sendEvent@ItemEventCoordinator@@QEAA?AW4CoordinatorResult@@V?$EventRef@U?$MutableItemGameplayEvent@W4CoordinatorResult@@@@@@@Z
     */
    MCAPI enum CoordinatorResult sendEvent(class EventRef<struct MutableItemGameplayEvent<enum CoordinatorResult>>);

};