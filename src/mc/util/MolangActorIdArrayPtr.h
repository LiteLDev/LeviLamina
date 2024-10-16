#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/common/ActorUniqueID.h"

struct MolangActorIdArrayPtr {
public:
    std::vector<ActorUniqueID> mActorIds;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangActorIdArrayPtr(std::vector<struct ActorUniqueID> actorIds);

    MCAPI ~MolangActorIdArrayPtr();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::vector<struct ActorUniqueID> actorIds);

    MCAPI void dtor$();

    // NOLINTEND
};
