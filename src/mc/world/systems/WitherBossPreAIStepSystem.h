#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

class WitherBossPreAIStepSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERBOSSPREAISTEPSYSTEM
public:
    WitherBossPreAIStepSystem& operator=(WitherBossPreAIStepSystem const&) = delete;
    WitherBossPreAIStepSystem(WitherBossPreAIStepSystem const&)            = delete;
    WitherBossPreAIStepSystem()                                            = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@WitherBossPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

    // private:
    /**
     * @symbol
     * ?_doWitherBossPreAIStepSystem\@WitherBossPreAIStepSystem\@\@CAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UWitherBossPreAIStepResultComponent\@\@\@\@\@Z
     */
    MCAPI static void
    _doWitherBossPreAIStepSystem(class StrictEntityContext&, class ActorOwnerComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct WitherBossPreAIStepResultComponent>);

private:
};
