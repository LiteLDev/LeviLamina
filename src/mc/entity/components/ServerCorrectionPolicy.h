#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/ClientReplayStatePolicy.h"

class ServerCorrectionPolicy : public ::ClientReplayStatePolicy {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERCORRECTIONPOLICY
public:
    ServerCorrectionPolicy& operator=(ServerCorrectionPolicy const&) = delete;
    ServerCorrectionPolicy(ServerCorrectionPolicy const&)            = delete;
    ServerCorrectionPolicy()                                         = delete;
#endif

public:
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
    shouldCorrectMovement(struct IActorMovementProxy&, class PlayerAuthInputPacket const&, unsigned __int64);
};
