/**
 * @file  SlimePreNormalTickSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class SlimePreNormalTickSystem.
 *
 */
class SlimePreNormalTickSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SLIMEPRENORMALTICKSYSTEM
public:
    class SlimePreNormalTickSystem& operator=(class SlimePreNormalTickSystem const &) = delete;
    SlimePreNormalTickSystem(class SlimePreNormalTickSystem const &) = delete;
    SlimePreNormalTickSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SlimePreNormalTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?_doSlimePreNormalTickSystem\@SlimePreNormalTickSystem\@\@CAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USlimeWasOnGroundPreNormalTick\@\@\@\@\@\@\@Z
     */
    MCAPI static void _doSlimePreNormalTickSystem(class StrictEntityContext &, class ActorOwnerComponent &, class Optional<class FlagComponent<struct OnGroundFlag> const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SlimeWasOnGroundPreNormalTick>>);
    /**
     * @symbol ?_tickSlimePreNormalTickSystem\@SlimePreNormalTickSystem\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@USlimeFlag\@\@\@\@\@\@VActorOwnerComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@UOnGroundFlag\@\@\@\@\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@USlimeWasOnGroundPreNormalTick\@\@\@\@\@\@\@Z
     */
    MCAPI static void _tickSlimePreNormalTickSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct SlimeFlag>>, class ActorOwnerComponent, class Optional<class FlagComponent<struct OnGroundFlag> const>>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct SlimeWasOnGroundPreNormalTick>>);

private:

};
