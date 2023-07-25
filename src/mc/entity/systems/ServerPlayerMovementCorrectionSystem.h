#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerPlayerMovementCorrectionSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERPLAYERMOVEMENTCORRECTIONSYSTEM
public:
    ServerPlayerMovementCorrectionSystem& operator=(ServerPlayerMovementCorrectionSystem const&) = delete;
    ServerPlayerMovementCorrectionSystem(ServerPlayerMovementCorrectionSystem const&)            = delete;
    ServerPlayerMovementCorrectionSystem()                                                       = delete;
#endif

public:
    /**
     * @symbol
     * ?_afterMovementSimulation\@ServerPlayerMovementCorrectionSystem\@\@SAXAEAVPlayer\@\@AEBVPlayerAuthInputPacket\@\@AEBVReplayStateComponent\@\@\@Z
     */
    MCAPI static void
    _afterMovementSimulation(class Player&, class PlayerAuthInputPacket const&, class ReplayStateComponent const&);
    /**
     * @symbol ?create\@ServerPlayerMovementCorrectionSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo create();
};
