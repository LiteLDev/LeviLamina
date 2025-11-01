#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/IReplayStatePolicy.h"
#include "mc/entity/components/ReplayStateConfig.h"
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
    ::ll::TypedStorage<8, 8, uint64> mLastCorrection;
    ::ll::TypedStorage<8, 16, ::std::optional<uint64>> mLastExternalCorrection;
    ::ll::TypedStorage<4, 20, ::ReplayStateConfig> mConfig;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::MovementCorrection shouldCorrectMovement(::EntityContext& entity, ::PlayerAuthInputPacket const& packet, uint64 frame, uchar const currentCounter, bool isStrictMovement) /*override*/;

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
    MCAPI ::MovementCorrection $shouldCorrectMovement(::EntityContext& entity, ::PlayerAuthInputPacket const& packet, uint64 frame, uchar const currentCounter, bool isStrictMovement);

    MCFOLD bool $isReplayNeeded(::AdvanceFrameResult) const;

    MCAPI void $notifyOfExternalCorrection(uint64 frame);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND

};
