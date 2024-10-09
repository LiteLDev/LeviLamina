#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MolangActorArrayPtr {
public:
    std::vector<class Actor*> mActors;

public:
    // NOLINTBEGIN
    MCAPI explicit MolangActorArrayPtr(std::vector<class Actor*>);

    MCAPI ~MolangActorArrayPtr();

    // NOLINTEND
};
