#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMoveSystems {

public:
    // prevent constructor by default
    PlayerMoveSystems& operator=(PlayerMoveSystems const&) = delete;
    PlayerMoveSystems(PlayerMoveSystems const&)            = delete;
    PlayerMoveSystems()                                    = delete;

public:
    /**
     * @symbol ?createLocalPlayerPreMoveJumpSystem\@PlayerMoveSystems\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLocalPlayerPreMoveJumpSystem(); // NOLINT
    /**
     * @symbol ?createLocalPlayerPreMoveSystem\@PlayerMoveSystems\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createLocalPlayerPreMoveSystem(); // NOLINT
    /**
     * @symbol ?createPlayerPostMoveSystem\@PlayerMoveSystems\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPostMoveSystem(); // NOLINT
};
