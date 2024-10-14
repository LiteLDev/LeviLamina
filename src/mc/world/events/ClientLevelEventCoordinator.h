#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/LevelEventCoordinator.h"

class ClientLevelEventCoordinator : public ::LevelEventCoordinator {
public:
    // prevent constructor by default
    ClientLevelEventCoordinator& operator=(ClientLevelEventCoordinator const&);
    ClientLevelEventCoordinator(ClientLevelEventCoordinator const&);
    ClientLevelEventCoordinator();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientLevelEventCoordinator() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
