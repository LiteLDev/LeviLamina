/**
 * @file  BounceEventingSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BounceEventingSystem.
 *
 */
class BounceEventingSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNCEEVENTINGSYSTEM
public:
    class BounceEventingSystem& operator=(class BounceEventingSystem const &) = delete;
    BounceEventingSystem(class BounceEventingSystem const &) = delete;
    BounceEventingSystem() = delete;
#endif

public:
    /**
     * @symbol ?_tickBounceEventingSystem\@BounceEventingSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UPlayerComponentFlag\@\@\@\@\@\@$$CBUStateVectorComponent\@\@$$CBUActorUniqueIDComponent\@\@$$CBUEventingDispatcherComponent\@\@UBounceComponent\@\@\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@\@\@\@Z
     */
    MCAPI static void _tickBounceEventingSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct PlayerComponentFlag>>, struct StateVectorComponent const, struct ActorUniqueIDComponent const, struct EventingDispatcherComponent const, struct BounceComponent>, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent>);
    /**
     * @symbol ?createSystem\@BounceEventingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doBounceEventingSystem\@BounceEventingSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEBUActorUniqueIDComponent\@\@AEBUEventingDispatcherComponent\@\@AEAUBounceComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@\@\@\@Z
     */
    MCAPI static void _doBounceEventingSystem(class StrictEntityContext const &, struct StateVectorComponent const &, struct ActorUniqueIDComponent const &, struct EventingDispatcherComponent const &, struct BounceComponent &, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent>);

private:

};
