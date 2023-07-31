#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ClientReplayStatePolicy.h"

class ServerCorrectionPolicy : public ::ClientReplayStatePolicy {

public:
    // prevent constructor by default
    ServerCorrectionPolicy& operator=(ServerCorrectionPolicy const&) = delete;
    ServerCorrectionPolicy(ServerCorrectionPolicy const&)            = delete;
    ServerCorrectionPolicy()                                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 3
     * @symbol
     * ?shouldCorrectMovement\@ServerCorrectionPolicy\@\@UEAA?AUMovementCorrection\@\@AEAUIActorMovementProxy\@\@AEBVPlayerAuthInputPacket\@\@_K\@Z
     */
    virtual struct MovementCorrection
    shouldCorrectMovement(struct IActorMovementProxy&, class PlayerAuthInputPacket const&, uint64_t);
    // NOLINTEND
};
