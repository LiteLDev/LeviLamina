#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/AdvanceFrameResult.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class PlayerAuthInputPacket;
struct MovementCorrection;
// clang-format on

struct IReplayStatePolicy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IReplayStatePolicy() = default;

    virtual bool isReplayNeeded(::AdvanceFrameResult result) const = 0;

    virtual ::MovementCorrection shouldCorrectMovement(
        ::EntityContext&               entity,
        ::PlayerAuthInputPacket const& packet,
        uint64                         frame,
        uchar                          currentCounter,
        bool                           isStrictMovement
    ) = 0;

    virtual void notifyOfExternalCorrection(uint64 frame) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
