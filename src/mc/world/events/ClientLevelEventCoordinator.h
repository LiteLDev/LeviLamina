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
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ClientLevelEventCoordinator() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
