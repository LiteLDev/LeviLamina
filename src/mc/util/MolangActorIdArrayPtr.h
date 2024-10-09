#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorIdArrayPtr {
public:
    // prevent constructor by default
    MolangActorIdArrayPtr& operator=(MolangActorIdArrayPtr const&);
    MolangActorIdArrayPtr(MolangActorIdArrayPtr const&);
    MolangActorIdArrayPtr();

public:
    // NOLINTBEGIN
    MCAPI explicit MolangActorIdArrayPtr(std::vector<struct ActorUniqueID> actorIds);

    MCAPI ~MolangActorIdArrayPtr();

    // NOLINTEND
};
