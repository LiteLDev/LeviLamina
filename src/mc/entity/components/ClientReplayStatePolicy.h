#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IReplayStatePolicy.h"
#include "mc/input/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PlayerAuthInputPacket;
struct MovementCorrection;
// clang-format on

class ClientReplayStatePolicy : public ::IReplayStatePolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6b7c80;
    ::ll::UntypedStorage<4, 8>  mUnka1d393;
    ::ll::UntypedStorage<4, 24> mUnk4025aa;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientReplayStatePolicy& operator=(ClientReplayStatePolicy const&);
    ClientReplayStatePolicy(ClientReplayStatePolicy const&);
    ClientReplayStatePolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isReplayNeeded(::AdvanceFrameResult result) const /*override*/;

    // vIndex: 2
    virtual bool canRewindToFrame(::EntityContext const& entity, uint64 rewindFrame) /*override*/;

    // vIndex: 3
    virtual ::MovementCorrection
    shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64) /*override*/;

    // vIndex: 4
    virtual void flagUnsupportedMovement(uint64 frame) /*override*/;

    // vIndex: 5
    virtual void storeCurrentFrameSupported(uint64 currentFrame, ::EntityContext& entity) /*override*/;

    // vIndex: 6
    virtual void notifyOfExternalCorrection(uint64) /*override*/;

    // vIndex: 0
    virtual ~ClientReplayStatePolicy() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _checkSupportedFrame(::EntityContext& entity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _isSupportedMovementMode(::EntityContext const& entity);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isReplayNeeded(::AdvanceFrameResult result) const;

    MCAPI bool $canRewindToFrame(::EntityContext const& entity, uint64 rewindFrame);

    MCAPI ::MovementCorrection $shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64);

    MCAPI void $flagUnsupportedMovement(uint64 frame);

    MCAPI void $storeCurrentFrameSupported(uint64 currentFrame, ::EntityContext& entity);

    MCFOLD void $notifyOfExternalCorrection(uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
