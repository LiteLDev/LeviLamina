/**
 * @file  ItemEventCoordinator.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol  ??0ItemEventCoordinator\@\@QEAA\@XZ
     */
    MCAPI ItemEventCoordinator();
    /**
     * @symbol  ?getItemGameplayHandler\@ItemEventCoordinator\@\@QEAAAEAVItemGameplayHandler\@\@XZ
     */
    MCAPI class ItemGameplayHandler & getItemGameplayHandler();
    /**
     * @symbol  ?onItemModifiedActor\@ItemEventCoordinator\@\@QEAAXAEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCAPI void onItemModifiedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @symbol  ?onItemSpawnedActor\@ItemEventCoordinator\@\@QEAAXAEBVItemStackBase\@\@AEBVActor\@\@\@Z
     */
    MCAPI void onItemSpawnedActor(class ItemStackBase const &, class Actor const &);
    /**
     * @symbol  ?registerItemGameplayHandler\@ItemEventCoordinator\@\@QEAAXV?$unique_ptr\@VItemGameplayHandler\@\@U?$default_delete\@VItemGameplayHandler\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void registerItemGameplayHandler(std::unique_ptr<class ItemGameplayHandler>);
    /**
     * @symbol  ?sendEvent\@ItemEventCoordinator\@\@QEAA?AW4CoordinatorResult\@\@V?$EventRef\@U?$MutableItemGameplayEvent\@W4CoordinatorResult\@\@\@\@\@\@\@Z
     */
    MCAPI enum class CoordinatorResult sendEvent(class EventRef<struct MutableItemGameplayEvent<enum class CoordinatorResult>>);

};