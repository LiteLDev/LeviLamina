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
    // vIndex: 0
    virtual ~ClientReplayStatePolicy() = default;

    // vIndex: 1
    virtual bool isReplayNeeded(::AdvanceFrameResult result) const;

    // vIndex: 2
    virtual bool canRewindToFrame(class EntityContext const&, uint64);

    // vIndex: 3
    virtual struct MovementCorrection
    shouldCorrectMovement(class EntityContext&, class PlayerAuthInputPacket const&, uint64);

    // vIndex: 4
    virtual void flagUnsupportedMovement(uint64 frame);

    // vIndex: 5
    virtual void storeCurrentFrameSupported(uint64, class EntityContext&);

    // vIndex: 6
    virtual void notifyOfExternalCorrection(uint64);

    MCAPI bool _checkSupportedFrame(class EntityContext&) const;

    MCAPI static bool _isSupportedMovementMode(class EntityContext const&);

    // NOLINTEND
};
