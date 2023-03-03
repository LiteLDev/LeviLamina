/**
 * @file  ClientPlayerRewindSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ClientPlayerRewindSystem.
 *
 */
class ClientPlayerRewindSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLIENTPLAYERREWINDSYSTEM
public:
    class ClientPlayerRewindSystem& operator=(class ClientPlayerRewindSystem const &) = delete;
    ClientPlayerRewindSystem(class ClientPlayerRewindSystem const &) = delete;
    ClientPlayerRewindSystem() = delete;
#endif

public:
    /**
     * @symbol  ?createSystem\@ClientPlayerRewindSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol  ?_doClientPlayerRewindSystem\@ClientPlayerRewindSystem\@\@CAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAVReplayStateComponent\@\@\@Z
     */
    MCAPI static void _doClientPlayerRewindSystem(class StrictEntityContext const &, class ActorOwnerComponent &, class ReplayStateComponent &);

private:

};