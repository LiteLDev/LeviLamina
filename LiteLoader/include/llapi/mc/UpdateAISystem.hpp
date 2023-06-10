/**
 * @file  UpdateAISystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class UpdateAISystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEAISYSTEM
public:
    class UpdateAISystem& operator=(class UpdateAISystem const &) = delete;
    UpdateAISystem(class UpdateAISystem const &) = delete;
    UpdateAISystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@UpdateAISystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_tick\@UpdateAISystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UMobFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@\@Z
     */
    MCAPI static void _tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct MobFlag>>, class ActorOwnerComponent>);

private:

};
