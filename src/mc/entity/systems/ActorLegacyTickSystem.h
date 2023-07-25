#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLegacyTickSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORLEGACYTICKSYSTEM
public:
    ActorLegacyTickSystem& operator=(ActorLegacyTickSystem const&) = delete;
    ActorLegacyTickSystem(ActorLegacyTickSystem const&)            = delete;
    ActorLegacyTickSystem()                                        = delete;
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
     * @symbol ?tick\@ActorLegacyTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&);
    /**
     * @symbol
     * ?tickActorLegacyTickSystem\@ActorLegacyTickSystem\@\@SAXAEAVEntityContext\@\@AEAVActor\@\@AEAVActorTickNeededComponent\@\@\@Z
     */
    MCAPI static void tickActorLegacyTickSystem(class EntityContext&, class Actor&, class ActorTickNeededComponent&);
};
