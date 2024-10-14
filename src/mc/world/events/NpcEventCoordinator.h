#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NpcEventCoordinator {
public:
    // prevent constructor by default
    NpcEventCoordinator& operator=(NpcEventCoordinator const&);
    NpcEventCoordinator(NpcEventCoordinator const&);
    NpcEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NpcEventCoordinator() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
