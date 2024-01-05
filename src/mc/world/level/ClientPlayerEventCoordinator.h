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
    // vIndex: 0, symbol: __gen_??1ClientPlayerEventCoordinator@@UEAA@XZ
    virtual ~ClientPlayerEventCoordinator() = default;

    // symbol: ?sendPlayerDestroyedBlock@ClientPlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlock@@@Z
    MCAPI void sendPlayerDestroyedBlock(class Player& player, class Block const& block);

    // symbol: ?sendStartDestroyBlock@ClientPlayerEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@AEAE@Z
    MCAPI void sendStartDestroyBlock(class Player& player, class BlockPos const& pos, uchar& face);

    // NOLINTEND
};
