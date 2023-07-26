#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLimitedLifetimeTickSystem {

public:
    // prevent constructor by default
    ActorLimitedLifetimeTickSystem& operator=(ActorLimitedLifetimeTickSystem const&) = delete;
    ActorLimitedLifetimeTickSystem(ActorLimitedLifetimeTickSystem const&)            = delete;
    ActorLimitedLifetimeTickSystem()                                                 = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol __unk_vfn_1
     */
    virtual void __unk_vfn_1(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?tick\@ActorLimitedLifetimeTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
};
