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
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerPlayerEventCoordinator@@UEAA@XZ
    virtual ~ServerPlayerEventCoordinator() = default;

    // symbol: ?sendPlayerAuthInputApplied@ServerPlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerAuthInputApplied(class Player& player);

    // symbol: ?sendPlayerAuthInputReceived@ServerPlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerAuthInputReceived(class Player& player);

    // symbol: ?sendPlayerOnGround@ServerPlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z
    MCAPI void sendPlayerOnGround(class Player& player);

    // NOLINTEND
};
