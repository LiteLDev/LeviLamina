#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/events/PlayerEventCoordinator.h"

class ClientPlayerEventCoordinator : public ::PlayerEventCoordinator {
public:
    // prevent constructor by default
    ClientPlayerEventCoordinator& operator=(ClientPlayerEventCoordinator const&);
    ClientPlayerEventCoordinator(ClientPlayerEventCoordinator const&);
    ClientPlayerEventCoordinator();

public:
    // NOLINTBEGIN
    // symbol: ?sendPlayerDestroyedBlock@ClientPlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlock@@@Z
    MCAPI void sendPlayerDestroyedBlock(class Player&, class Block const&);

    // symbol: ?sendStartDestroyBlock@ClientPlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@AEAE@Z
    MCAPI void sendStartDestroyBlock(class Player&, class BlockPos const&, uchar&);

    // NOLINTEND
};
