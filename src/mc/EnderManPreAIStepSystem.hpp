/**
 * @file  EnderManPreAIStepSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EnderManPreAIStepSystem.
 *
 */
class EnderManPreAIStepSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ENDERMANPREAISTEPSYSTEM
public:
    class EnderManPreAIStepSystem& operator=(class EnderManPreAIStepSystem const &) = delete;
    EnderManPreAIStepSystem(class EnderManPreAIStepSystem const &) = delete;
    EnderManPreAIStepSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@EnderManPreAIStepSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol  ?tick\@EnderManPreAIStepSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@V?$FlagComponent\@UEnderManFlag\@\@\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobIsJumpingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tick(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct EnderManFlag>, class FlagComponent<struct MobIsJumpingFlag>>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobIsJumpingFlag>>);

};