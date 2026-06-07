#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/legacy/ActorRuntimeID.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

struct MotionPredictionHintsPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID> mRuntimeId;
    ::ll::TypedStorage<4, 12, ::Vec3>          mMotion;
    ::ll::TypedStorage<1, 1, bool>             mOnGround;
    // NOLINTEND

public:
    // prevent constructor by default
    MotionPredictionHintsPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MotionPredictionHintsPacketPayload(::Actor const& entity);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& entity);
    // NOLINTEND
};
