#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLimitedLifetimeTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORLIMITEDLIFETIMETICKSYSTEM
public:
    ActorLimitedLifetimeTickSystem& operator=(ActorLimitedLifetimeTickSystem const&) = delete;
    ActorLimitedLifetimeTickSystem(ActorLimitedLifetimeTickSystem const&)            = delete;
    ActorLimitedLifetimeTickSystem()                                                 = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1();
    /**
     * @vftbl 2
     * @symbol ?tick\@ActorLimitedLifetimeTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
};
