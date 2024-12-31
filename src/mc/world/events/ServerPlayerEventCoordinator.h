#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/PlayerEventCoordinator.h"

class ServerPlayerEventCoordinator : public ::PlayerEventCoordinator {
public:
    // prevent constructor by default
    ServerPlayerEventCoordinator& operator=(ServerPlayerEventCoordinator const&);
    ServerPlayerEventCoordinator(ServerPlayerEventCoordinator const&);
    ServerPlayerEventCoordinator();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerPlayerEventCoordinator() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
