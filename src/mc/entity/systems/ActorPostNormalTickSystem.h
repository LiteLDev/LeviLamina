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
    MCAPI static struct TickingSystemWithInfo createSystemClient();

    MCAPI static struct TickingSystemWithInfo createSystemServer();

    // NOLINTEND
};
