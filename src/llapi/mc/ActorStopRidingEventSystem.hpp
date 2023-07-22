/**
 * @file  ActorStopRidingEventSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ActorStopRidingEventSystem.
 *
 */
class ActorStopRidingEventSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORSTOPRIDINGEVENTSYSTEM
public:
    class ActorStopRidingEventSystem& operator=(class ActorStopRidingEventSystem const &) = delete;
    ActorStopRidingEventSystem(class ActorStopRidingEventSystem const &) = delete;
    ActorStopRidingEventSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ActorStopRidingEventSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol  ?tickSendEvent\@ActorStopRidingEventSystem\@\@SAXAEAVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@V?$Optional\@$$CBV?$FlagComponent\@ULocalPlayerComponentFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UActorIsBeingDestroyedFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@UExitFromPassengerFlag\@\@\@\@\@\@V?$Optional\@$$CBV?$FlagComponent\@USwitchingVehiclesFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickSendEvent(class StrictEntityContext &, class ActorOwnerComponent &, class Optional<class FlagComponent<struct LocalPlayerComponentFlag> const>, class Optional<class FlagComponent<struct ActorIsBeingDestroyedFlag> const>, class Optional<class FlagComponent<struct ExitFromPassengerFlag> const>, class Optional<class FlagComponent<struct SwitchingVehiclesFlag> const>);

};