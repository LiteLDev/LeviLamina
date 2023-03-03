/**
 * @file  ActorDataSyncSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorDataSyncSystem.
 *
 */
class ActorDataSyncSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORDATASYNCSYSTEM
public:
    class ActorDataSyncSystem& operator=(class ActorDataSyncSystem const &) = delete;
    ActorDataSyncSystem(class ActorDataSyncSystem const &) = delete;
    ActorDataSyncSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createActorDataSyncSystem\@ActorDataSyncSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorDataSyncSystem();

};