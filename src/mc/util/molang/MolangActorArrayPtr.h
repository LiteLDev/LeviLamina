#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorArrayPtr {
public:
    // prevent constructor by default
    MolangActorArrayPtr& operator=(MolangActorArrayPtr const&);
    MolangActorArrayPtr(MolangActorArrayPtr const&);
    MolangActorArrayPtr();

public:
    // NOLINTBEGIN
    // symbol: ??0MolangActorArrayPtr@@QEAA@V?$vector@PEAVActor@@V?$allocator@PEAVActor@@@std@@@std@@@Z
    MCAPI explicit MolangActorArrayPtr(std::vector<class Actor*> actors);

    // symbol: ??1MolangActorArrayPtr@@QEAA@XZ
    MCAPI ~MolangActorArrayPtr();

    // NOLINTEND
};
