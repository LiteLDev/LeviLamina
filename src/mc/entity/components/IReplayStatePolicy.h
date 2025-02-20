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
    virtual bool canRewind(::EntityContext const&) = 0;

    // vIndex: 3
    virtual ::MovementCorrection
    shouldCorrectMovement(::EntityContext&, ::PlayerAuthInputPacket const&, uint64, uchar) = 0;

    // vIndex: 4
    virtual bool validateFrameSupport(::EntityContext&) = 0;

    // vIndex: 5
    virtual void notifyOfExternalCorrection(uint64) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
