/**
 * @file  MobOnPlayerJumpSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MobOnPlayerJumpSystem.
 *
 */
class MobOnPlayerJumpSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOBONPLAYERJUMPSYSTEM
public:
    class MobOnPlayerJumpSystem& operator=(class MobOnPlayerJumpSystem const &) = delete;
    MobOnPlayerJumpSystem(class MobOnPlayerJumpSystem const &) = delete;
    MobOnPlayerJumpSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createClientSystem\@MobOnPlayerJumpSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createClientSystem();
    /**
     * @symbol  ?getPlayerJumpPendingScale\@MobOnPlayerJumpSystem\@\@SAMH\@Z
     */
    MCAPI static float getPlayerJumpPendingScale(int);

//private:
    /**
     * @symbol  ?_tickMobOnPlayerJumpSystem\@MobOnPlayerJumpSystem\@\@CAXAEAVStrictEntityContext\@\@AEBUMobOnPlayerJumpRequestComponent\@\@AEAUJumpPendingScaleComponent\@\@AEAUSynchedActorDataComponent\@\@V?$Optional\@UHorseStandCounterComponent\@\@\@\@V?$Optional\@$$CBUPassengerComponent\@\@\@\@AEAV?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMobAllowStandSlidingFlag\@\@\@\@V?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@V?$FlagComponent\@UStopRidingRequestFlag\@\@\@\@UMobOnPlayerJumpRequestComponent\@\@\@\@_N\@Z
     */
    MCAPI static void _tickMobOnPlayerJumpSystem(class StrictEntityContext &, struct MobOnPlayerJumpRequestComponent const &, struct JumpPendingScaleComponent &, struct SynchedActorDataComponent &, class Optional<struct HorseStandCounterComponent>, class Optional<struct PassengerComponent const>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MobAllowStandSlidingFlag>, class FlagComponent<struct ExitFromPassengerFlag>, class FlagComponent<struct StopRidingRequestFlag>, struct MobOnPlayerJumpRequestComponent> &, bool);

private:

};