#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorLegacyTickSystem {

public:
    // prevent constructor by default
    ActorLegacyTickSystem& operator=(ActorLegacyTickSystem const&) = delete;
    ActorLegacyTickSystem(ActorLegacyTickSystem const&)            = delete;
    ActorLegacyTickSystem()                                        = delete;

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
     * @symbol ?tick\@ActorLegacyTickSystem\@\@UEAAXAEAVEntityRegistry\@\@\@Z
     */
    virtual void tick(class EntityRegistry&); // NOLINT
    /**
     * @symbol
     * ?tickActorLegacyTickSystem\@ActorLegacyTickSystem\@\@SAXAEAVEntityContext\@\@AEAVActor\@\@AEAVActorTickNeededComponent\@\@\@Z
     */
    MCAPI static void
    tickActorLegacyTickSystem(class EntityContext&, class Actor&, class ActorTickNeededComponent&); // NOLINT
};
