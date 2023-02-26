/**
 * @file  ResetFrictionModifierSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ResetFrictionModifierSystem.
 *
 */
class ResetFrictionModifierSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESETFRICTIONMODIFIERSYSTEM
public:
    class ResetFrictionModifierSystem& operator=(class ResetFrictionModifierSystem const &) = delete;
    ResetFrictionModifierSystem(class ResetFrictionModifierSystem const &) = delete;
    ResetFrictionModifierSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createResetFrictionModifierSystem\@ResetFrictionModifierSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createResetFrictionModifierSystem();
    /**
     * @symbol  ?tickResetFrictionModifierSystem\@ResetFrictionModifierSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@V?$FlagComponent\@UUsesECSMovementFlag\@\@\@\@V?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@UPlayerInputRequestComponent\@\@UVanillaClientGameplayComponent\@\@\@\@UFrictionModifierComponent\@\@\@\@\@Z
     */
    MCAPI static void tickResetFrictionModifierSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, class FlagComponent<struct UsesECSMovementFlag>, class FlagComponent<struct LocalPlayerComponentFlag>, struct PlayerInputRequestComponent, struct VanillaClientGameplayComponent>, struct FrictionModifierComponent>);

};