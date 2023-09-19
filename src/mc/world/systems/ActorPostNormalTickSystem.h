#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ActorPostNormalTickSystem {
public:
    // prevent constructor by default
    ActorPostNormalTickSystem& operator=(ActorPostNormalTickSystem const&);
    ActorPostNormalTickSystem(ActorPostNormalTickSystem const&);
    ActorPostNormalTickSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createSystemClient@ActorPostNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystemClient();

    // symbol: ?createSystemServer@ActorPostNormalTickSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createSystemServer();

    // NOLINTEND
};
