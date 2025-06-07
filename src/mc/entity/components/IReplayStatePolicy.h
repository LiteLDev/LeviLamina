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
    // vIndex: 0
    virtual ~IReplayStatePolicy() = default;

    // vIndex: 1
    virtual bool isReplayNeeded(::AdvanceFrameResult) const = 0;

    // vIndex: 2
    virtual ::MovementCorrection
    shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar, bool) = 0;

    // vIndex: 3
    virtual void notifyOfExternalCorrection(uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
