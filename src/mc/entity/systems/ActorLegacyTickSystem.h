#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/systems/ITickingSystem.h"

class ActorLegacyTickSystem : public ::ITickingSystem {

public:
    // prevent constructor by default
    ActorLegacyTickSystem& operator=(ActorLegacyTickSystem const&) = delete;
    ActorLegacyTickSystem(ActorLegacyTickSystem const&)            = delete;
    ActorLegacyTickSystem()                                        = delete;

public:
    // NOLINTBEGIN
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
    // NOLINTEND
};
