#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/AdvanceFrameResult.h"
#include "mc/entity/components/IReplayStatePolicy.h"

class ServerCorrectionPolicy : public ::IReplayStatePolicy {
public:
    // prevent constructor by default
    ServerCorrectionPolicy& operator=(ServerCorrectionPolicy const&);
    ServerCorrectionPolicy(ServerCorrectionPolicy const&);
    ServerCorrectionPolicy();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerCorrectionPolicy@@UEAA@XZ
    virtual ~ServerCorrectionPolicy() = default;

    // vIndex: 1, symbol: ?isReplayNeeded@ServerCorrectionPolicy@@UEBA_NW4AdvanceFrameResult@@@Z
    virtual bool isReplayNeeded(::AdvanceFrameResult) const;

    // vIndex: 2, symbol: ?canRewindToFrame@ServerCorrectionPolicy@@UEAA_NAEBVEntityContext@@_K1@Z
    virtual bool canRewindToFrame(class EntityContext const&, uint64, uint64);

    // vIndex: 3, symbol:
    // ?shouldCorrectMovement@ServerCorrectionPolicy@@UEAA?AUMovementCorrection@@AEAVEntityContext@@AEBVPlayerAuthInputPacket@@_K@Z
    virtual struct MovementCorrection
    shouldCorrectMovement(class EntityContext&, class PlayerAuthInputPacket const&, uint64);

    // vIndex: 4, symbol: ?flagUnsupportedMovement@ServerCorrectionPolicy@@UEAAX_K@Z
    virtual void flagUnsupportedMovement(uint64);

    // vIndex: 5, symbol: ?storeCurrentFrameSupported@ServerCorrectionPolicy@@UEAAX_KAEAVEntityContext@@@Z
    virtual void storeCurrentFrameSupported(uint64, class EntityContext&);

    // NOLINTEND
};
