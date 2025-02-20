#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IReplayStatePolicy.h"
#include "mc/entity/utilities/AdvanceFrameResult.h"

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
    ::ll::UntypedStorage<4, 8>  mUnka1d393;
    ::ll::UntypedStorage<4, 20> mUnk4025aa;
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
    virtual bool canRewind(::EntityContext const& entity) /*override*/;

    // vIndex: 3
    virtual ::MovementCorrection
    shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar) /*override*/;

    // vIndex: 4
    virtual bool validateFrameSupport(::EntityContext& entity) /*override*/;

    // vIndex: 5
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

    MCAPI bool $canRewind(::EntityContext const& entity);

    MCAPI ::MovementCorrection $shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar);

    MCAPI bool $validateFrameSupport(::EntityContext& entity);

    MCFOLD void $notifyOfExternalCorrection(uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
