#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorSpawnConditionData {
public:
    // prevent constructor by default
    ActorSpawnConditionData(ActorSpawnConditionData const&);
    ActorSpawnConditionData();

public:
    // NOLINTBEGIN
    MCAPI struct ActorSpawnConditionData& operator=(struct ActorSpawnConditionData const&);

    MCAPI ~ActorSpawnConditionData();

    // NOLINTEND
};
