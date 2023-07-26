#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientLevelEventCoordinator {

public:
    // prevent constructor by default
    ClientLevelEventCoordinator& operator=(ClientLevelEventCoordinator const&) = delete;
    ClientLevelEventCoordinator(ClientLevelEventCoordinator const&)            = delete;
    ClientLevelEventCoordinator()                                              = delete;
};
