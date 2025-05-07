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
    shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar, bool) /*override*/;

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
    MCNAPI bool _checkSupportedFrame(::EntityContext& entity) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _isSupportedMovementMode(::EntityContext const& entity);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isReplayNeeded(::AdvanceFrameResult result) const;

    MCNAPI bool $canRewind(::EntityContext const& entity);

    MCNAPI ::MovementCorrection
    $shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar, bool);

    MCNAPI bool $validateFrameSupport(::EntityContext& entity);

    MCNAPI void $notifyOfExternalCorrection(uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
