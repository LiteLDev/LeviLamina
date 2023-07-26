/**
 * @file  WitherBossPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class WitherBossPreAIStepSystem.
 *
 */
class WitherBossPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_WITHERBOSSPREAISTEPSYSTEM
public:
    class WitherBossPreAIStepSystem& operator=(class WitherBossPreAIStepSystem const &) = delete;
    WitherBossPreAIStepSystem(class WitherBossPreAIStepSystem const &) = delete;
    WitherBossPreAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@WitherBossPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doWitherBossPreAIStepSystem\@WitherBossPreAIStepSystem\@\@CAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UWitherBossPreAIStepResultComponent\@\@\@\@\@Z
     */
    MCAPI static void _doWitherBossPreAIStepSystem(class StrictEntityContext &, class ActorOwnerComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct WitherBossPreAIStepResultComponent>);

private:

};