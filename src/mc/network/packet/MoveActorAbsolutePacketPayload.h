#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/MoveActorAbsoluteData.h"

struct MoveActorAbsolutePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::MoveActorAbsoluteData> mMoveData;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveActorAbsolutePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MoveActorAbsolutePacketPayload(::MoveActorAbsoluteData const& data);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::MoveActorAbsoluteData const& data);
    // NOLINTEND
};
