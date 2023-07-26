#pragma once

#include "mc/_HeaderOutputPredefine.h"

class NpcEventCoordinator {

public:
    // prevent constructor by default
    NpcEventCoordinator& operator=(NpcEventCoordinator const&) = delete;
    NpcEventCoordinator(NpcEventCoordinator const&)            = delete;
    NpcEventCoordinator()                                      = delete;
};
