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
    MCAPI explicit MolangActorArrayPtr(std::vector<class Actor*>);

    MCAPI ~MolangActorArrayPtr();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::vector<class Actor*>);

    MCAPI void dtor$();

    // NOLINTEND
};
