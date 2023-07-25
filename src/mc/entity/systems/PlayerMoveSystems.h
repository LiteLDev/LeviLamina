#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMoveSystems {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVESYSTEMS
public:
    PlayerMoveSystems& operator=(PlayerMoveSystems const&) = delete;
    PlayerMoveSystems(PlayerMoveSystems const&)            = delete;
    PlayerMoveSystems()                                    = delete;
#endif

public:
    /**
     * @symbol ?createLocalPlayerPreMoveJumpSystem\@PlayerMoveSystems\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLocalPlayerPreMoveJumpSystem();
    /**
     * @symbol ?createLocalPlayerPreMoveSystem\@PlayerMoveSystems\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLocalPlayerPreMoveSystem();
    /**
     * @symbol ?createPlayerPostMoveSystem\@PlayerMoveSystems\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPostMoveSystem();
};
