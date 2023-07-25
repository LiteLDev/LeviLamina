#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/ViewT.h"

class BounceEventingSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BOUNCEEVENTINGSYSTEM
public:
    BounceEventingSystem& operator=(BounceEventingSystem const&) = delete;
    BounceEventingSystem(BounceEventingSystem const&)            = delete;
    BounceEventingSystem()                                       = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@BounceEventingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doBounceEventingSystem\@BounceEventingSystem\@\@CAXAEBVStrictEntityContext\@\@AEBUStateVectorComponent\@\@AEBUActorUniqueIDComponent\@\@AEBUEventingDispatcherComponent\@\@AEAUBounceComponent\@\@V?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@UEventingRequestQueueComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _doBounceEventingSystem(class StrictEntityContext const&, struct StateVectorComponent const&, struct ActorUniqueIDComponent const&, struct EventingDispatcherComponent const&, struct BounceComponent&, class ViewT<class StrictEntityContext, class EntityRegistryBase, struct EventingRequestQueueComponent>);

private:
};
