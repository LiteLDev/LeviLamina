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
    // vIndex: 2
    virtual ::MovementCorrection shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar const                    currentCounter,
        bool                           isStrictMovement
    ) /*override*/;

    // vIndex: 1
    virtual bool isReplayNeeded(::AdvanceFrameResult) const /*override*/;

    // vIndex: 3
    virtual void notifyOfExternalCorrection(uint64 frame) /*override*/;

    // vIndex: 0
    virtual ~ServerCorrectionPolicy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MovementCorrection $shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar const                    currentCounter,
        bool                           isStrictMovement
    );

    MCFOLD bool $isReplayNeeded(::AdvanceFrameResult) const;

    MCAPI void $notifyOfExternalCorrection(uint64 frame);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
