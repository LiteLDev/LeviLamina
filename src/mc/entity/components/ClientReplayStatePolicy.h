#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/AdvanceFrameResult.h"
#include "mc/entity/components/IReplayStatePolicy.h"

class ClientReplayStatePolicy : public ::IReplayStatePolicy {
public:
    // prevent constructor by default
    ClientReplayStatePolicy& operator=(ClientReplayStatePolicy const&);
    ClientReplayStatePolicy(ClientReplayStatePolicy const&);
    ClientReplayStatePolicy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isReplayNeeded@ClientReplayStatePolicy@@UEBA_NW4AdvanceFrameResult@@@Z
    virtual bool isReplayNeeded(::AdvanceFrameResult) const;

    // vIndex: 2, symbol: ?canRewindToFrame@ClientReplayStatePolicy@@UEAA_NAEAUIActorMovementProxy@@_K1@Z
    virtual bool canRewindToFrame(struct IActorMovementProxy&, uint64, uint64);

    // vIndex: 3, symbol:
    // ?shouldCorrectMovement@ClientReplayStatePolicy@@UEAA?AUMovementCorrection@@AEAUIActorMovementProxy@@AEBVPlayerAuthInputPacket@@_K@Z
    virtual struct MovementCorrection
    shouldCorrectMovement(struct IActorMovementProxy&, class PlayerAuthInputPacket const&, uint64);

    // vIndex: 4, symbol: ?flagUnsupportedMovement@ClientReplayStatePolicy@@UEAAX_K@Z
    virtual void flagUnsupportedMovement(uint64);

    // vIndex: 5, symbol: ?storeCurrentFrameSupported@ClientReplayStatePolicy@@UEAAX_KAEAUIActorMovementProxy@@@Z
    virtual void storeCurrentFrameSupported(uint64, struct IActorMovementProxy&);

    // symbol: ?_checkSupportedFrame@ClientReplayStatePolicy@@QEBA_NAEAUIActorMovementProxy@@@Z
    MCAPI bool _checkSupportedFrame(struct IActorMovementProxy&) const;

    // symbol: ?_isSupportedMovementMode@ClientReplayStatePolicy@@QEBA_NAEBUIMobMovementProxy@@@Z
    MCAPI bool _isSupportedMovementMode(struct IMobMovementProxy const&) const;

    // NOLINTEND
};
