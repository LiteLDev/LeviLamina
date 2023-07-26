#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerTickSystem {

public:
    // prevent constructor by default
    PlayerTickSystem& operator=(PlayerTickSystem const&) = delete;
    PlayerTickSystem(PlayerTickSystem const&)            = delete;
    PlayerTickSystem()                                   = delete;

public:
    /**
     * @symbol ?create\@PlayerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
    /**
     * @symbol ?onTickAdded\@PlayerTickSystem\@\@SAXAEAUPlayerTickComponent\@\@_K\@Z
     */
    MCAPI static void onTickAdded(struct PlayerTickComponent&, unsigned __int64); // NOLINT
    /**
     * @symbol ?shouldTickMovementSystemOnEntity\@PlayerTickSystem\@\@SA_NAEBVEntityContext\@\@\@Z
     */
    MCAPI static bool shouldTickMovementSystemOnEntity(class EntityContext const&); // NOLINT
};
