#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerTickSystem {
public:
    // prevent constructor by default
    PlayerTickSystem& operator=(PlayerTickSystem const&);
    PlayerTickSystem(PlayerTickSystem const&);
    PlayerTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?create@PlayerTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // symbol: ?onTickAdded@PlayerTickSystem@@SAXAEAUPlayerTickComponent@@_K@Z
    MCAPI static void onTickAdded(struct PlayerTickComponent&, uint64);

    // symbol: ?shouldTickMovementSystemOnEntity@PlayerTickSystem@@SA_NAEBVEntityContext@@@Z
    MCAPI static bool shouldTickMovementSystemOnEntity(class EntityContext const&);

    // NOLINTEND
};
