#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerMovementCorrectionSystem {
public:
    // prevent constructor by default
    ServerPlayerMovementCorrectionSystem& operator=(ServerPlayerMovementCorrectionSystem const&);
    ServerPlayerMovementCorrectionSystem(ServerPlayerMovementCorrectionSystem const&);
    ServerPlayerMovementCorrectionSystem();

public:
    // NOLINTBEGIN
    // symbol:
    // ?_afterMovementSimulation@ServerPlayerMovementCorrectionSystem@@SAXAEAVPlayer@@AEBVPlayerAuthInputPacket@@AEBVReplayStateComponent@@AEAUStateVectorComponent@@@Z
    MCAPI static void
    _afterMovementSimulation(class Player&, class PlayerAuthInputPacket const&, class ReplayStateComponent const&, struct StateVectorComponent&);

    // symbol: ?create@ServerPlayerMovementCorrectionSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo create();

    // NOLINTEND
};
