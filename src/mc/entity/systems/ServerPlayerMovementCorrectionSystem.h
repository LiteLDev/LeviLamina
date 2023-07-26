#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerMovementCorrectionSystem {

public:
    // prevent constructor by default
    ServerPlayerMovementCorrectionSystem& operator=(ServerPlayerMovementCorrectionSystem const&) = delete;
    ServerPlayerMovementCorrectionSystem(ServerPlayerMovementCorrectionSystem const&)            = delete;
    ServerPlayerMovementCorrectionSystem()                                                       = delete;

public:
    /**
     * @symbol
     * ?_afterMovementSimulation\@ServerPlayerMovementCorrectionSystem\@\@SAXAEAVPlayer\@\@AEBVPlayerAuthInputPacket\@\@AEBVReplayStateComponent\@\@\@Z
     */
    MCAPI static void
    _afterMovementSimulation(class Player&, class PlayerAuthInputPacket const&, class ReplayStateComponent const&); // NOLINT
    /**
     * @symbol ?create\@ServerPlayerMovementCorrectionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create(); // NOLINT
};
