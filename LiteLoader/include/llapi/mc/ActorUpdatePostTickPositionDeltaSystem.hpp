/**
 * @file  ActorUpdatePostTickPositionDeltaSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorUpdatePostTickPositionDeltaSystem.
 *
 */
class ActorUpdatePostTickPositionDeltaSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORUPDATEPOSTTICKPOSITIONDELTASYSTEM
public:
    class ActorUpdatePostTickPositionDeltaSystem& operator=(class ActorUpdatePostTickPositionDeltaSystem const &) = delete;
    ActorUpdatePostTickPositionDeltaSystem(class ActorUpdatePostTickPositionDeltaSystem const &) = delete;
    ActorUpdatePostTickPositionDeltaSystem() = delete;
#endif

public:
    /**
     * @symbol ?createActorUpdatePostTickPositionDeltaSystem\@ActorUpdatePostTickPositionDeltaSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createActorUpdatePostTickPositionDeltaSystem();

//private:
    /**
     * @symbol ?_tickActorUpdatePostTickPositionDeltaSystem\@ActorUpdatePostTickPositionDeltaSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@$$CBUStateVectorComponent\@\@UPostTickPositionDeltaComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickActorUpdatePostTickPositionDeltaSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, struct StateVectorComponent const, struct PostTickPositionDeltaComponent>);

private:

};
