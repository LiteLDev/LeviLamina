#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

struct MolangActorIdArrayPtr {
public:
    std::vector<ActorUniqueID> mActorIds;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangActorIdArrayPtr(std::vector<struct ActorUniqueID> actorIds);

    MCAPI ~MolangActorIdArrayPtr();

    // NOLINTEND
};
