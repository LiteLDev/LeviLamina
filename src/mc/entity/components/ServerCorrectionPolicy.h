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

class ServerCorrectionPolicy : public ::IReplayStatePolicy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk2554b0;
    ::ll::UntypedStorage<8, 16> mUnk2fab45;
    ::ll::UntypedStorage<4, 20> mUnk93eaea;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerCorrectionPolicy& operator=(ServerCorrectionPolicy const&);
    ServerCorrectionPolicy(ServerCorrectionPolicy const&);
    ServerCorrectionPolicy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::MovementCorrection shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar const                    currentCounter,
        bool                           isStrictMovement
    ) /*override*/;

    // vIndex: 2
    virtual bool canRewind(::EntityContext const&) /*override*/;

    // vIndex: 1
    virtual bool isReplayNeeded(::AdvanceFrameResult) const /*override*/;

    // vIndex: 4
    virtual bool validateFrameSupport(::EntityContext&) /*override*/;

    // vIndex: 5
    virtual void notifyOfExternalCorrection(uint64 frame) /*override*/;

    // vIndex: 0
    virtual ~ServerCorrectionPolicy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::MovementCorrection $shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar const                    currentCounter,
        bool                           isStrictMovement
    );

    MCNAPI bool $canRewind(::EntityContext const&);

    MCNAPI bool $isReplayNeeded(::AdvanceFrameResult) const;

    MCNAPI bool $validateFrameSupport(::EntityContext&);

    MCNAPI void $notifyOfExternalCorrection(uint64 frame);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
