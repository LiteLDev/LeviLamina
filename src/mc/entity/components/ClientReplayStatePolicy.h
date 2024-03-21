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
    // vIndex: 0, symbol: __gen_??1ClientReplayStatePolicy@@UEAA@XZ
    virtual ~ClientReplayStatePolicy() = default;

    // vIndex: 1, symbol: ?isReplayNeeded@ClientReplayStatePolicy@@UEBA_NW4AdvanceFrameResult@@@Z
    virtual bool isReplayNeeded(::AdvanceFrameResult result) const;

    // vIndex: 2, symbol: ?canRewindToFrame@ClientReplayStatePolicy@@UEAA_NAEBVEntityContext@@_K1@Z
    virtual bool canRewindToFrame(class EntityContext const&, uint64, uint64);

    // vIndex: 3, symbol:
    // ?shouldCorrectMovement@ClientReplayStatePolicy@@UEAA?AUMovementCorrection@@AEAVEntityContext@@AEBVPlayerAuthInputPacket@@_K@Z
    virtual struct MovementCorrection
    shouldCorrectMovement(class EntityContext&, class PlayerAuthInputPacket const&, uint64);

    // vIndex: 4, symbol: ?flagUnsupportedMovement@ClientReplayStatePolicy@@UEAAX_K@Z
    virtual void flagUnsupportedMovement(uint64 frame);

    // vIndex: 5, symbol: ?storeCurrentFrameSupported@ClientReplayStatePolicy@@UEAAX_KAEAVEntityContext@@@Z
    virtual void storeCurrentFrameSupported(uint64, class EntityContext&);

    // symbol: ?_checkSupportedFrame@ClientReplayStatePolicy@@QEBA_NAEAVEntityContext@@@Z
    MCAPI bool _checkSupportedFrame(class EntityContext&) const;

    // symbol: ?_isSupportedMovementMode@ClientReplayStatePolicy@@SA_NAEBVEntityContext@@@Z
    MCAPI static bool _isSupportedMovementMode(class EntityContext const&);

    // NOLINTEND
};
