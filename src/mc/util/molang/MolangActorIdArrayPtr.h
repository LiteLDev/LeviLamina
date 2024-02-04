#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/ActorUniqueID.h"

struct MolangActorIdArrayPtr {
public:
    std::vector<ActorUniqueID> mActorIds;

public:
    // NOLINTBEGIN
    // symbol: ??0MolangActorIdArrayPtr@@QEAA@V?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@@Z
    MCAPI explicit MolangActorIdArrayPtr(std::vector<struct ActorUniqueID> actorIds);

    // symbol: ??1MolangActorIdArrayPtr@@QEAA@XZ
    MCAPI ~MolangActorIdArrayPtr();

    // NOLINTEND
};
