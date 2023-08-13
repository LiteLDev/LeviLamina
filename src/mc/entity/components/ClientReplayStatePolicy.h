#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IReplayStatePolicy.h"

class ClientReplayStatePolicy : public ::IReplayStatePolicy {

public:
    // prevent constructor by default
    ClientReplayStatePolicy& operator=(ClientReplayStatePolicy const&) = delete;
    ClientReplayStatePolicy(ClientReplayStatePolicy const&)            = delete;
    ClientReplayStatePolicy()                                          = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isReplayNeeded\@ClientReplayStatePolicy\@\@UEBA_NW4AdvanceFrameResult\@\@\@Z
     */
    virtual bool isReplayNeeded(enum class AdvanceFrameResult) const;
    /**
     * @vftbl 2
     * @symbol ?canRewindToFrame\@ClientReplayStatePolicy\@\@UEAA_NAEAUIActorMovementProxy\@\@_K1\@Z
     */
    virtual bool canRewindToFrame(struct IActorMovementProxy&, uint64_t, uint64_t);
    /**
     * @vftbl 3
     * @symbol
     * ?shouldCorrectMovement\@ClientReplayStatePolicy\@\@UEAA?AUMovementCorrection\@\@AEAUIActorMovementProxy\@\@AEBVPlayerAuthInputPacket\@\@_K\@Z
     */
    virtual struct MovementCorrection
    shouldCorrectMovement(struct IActorMovementProxy&, class PlayerAuthInputPacket const&, uint64_t);
    /**
     * @vftbl 4
     * @symbol ?flagUnsupportedMovement\@ClientReplayStatePolicy\@\@UEAAX_K\@Z
     */
    virtual void flagUnsupportedMovement(uint64_t);
    /**
     * @vftbl 5
     * @symbol ?storeCurrentFrameSupported\@ClientReplayStatePolicy\@\@UEAAX_KAEAUIActorMovementProxy\@\@\@Z
     */
    virtual void storeCurrentFrameSupported(uint64_t, struct IActorMovementProxy&);
    /**
     * @symbol ?_checkSupportedFrame\@ClientReplayStatePolicy\@\@QEBA_NAEAUIActorMovementProxy\@\@\@Z
     */
    MCAPI bool _checkSupportedFrame(struct IActorMovementProxy&) const;
    /**
     * @symbol ?_isSupportedMovementMode\@ClientReplayStatePolicy\@\@QEBA_NAEBUIMobMovementProxy\@\@\@Z
     */
    MCAPI bool _isSupportedMovementMode(struct IMobMovementProxy const&) const;
    // NOLINTEND
};
