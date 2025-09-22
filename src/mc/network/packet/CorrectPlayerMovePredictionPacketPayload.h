#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/entity/enums/RewindType.h"
#include "mc/network/packet/PlayerInputTick.h"

struct CorrectPlayerMovePredictionPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::Vec3>                mPos;
    ::ll::TypedStorage<4, 12, ::Vec3>                mPosDelta;
    ::ll::TypedStorage<4, 8, ::Vec2>                 mVehicleRotation;
    ::ll::TypedStorage<4, 8, ::std::optional<float>> mVehicleAngularVelocity;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>      mTick;
    ::ll::TypedStorage<1, 1, bool>                   mOnGround;
    ::ll::TypedStorage<1, 1, ::RewindType>           mPredictionType;
    // NOLINTEND

public:
    // prevent constructor by default
    CorrectPlayerMovePredictionPacketPayload& operator=(CorrectPlayerMovePredictionPacketPayload const&);
    CorrectPlayerMovePredictionPacketPayload(CorrectPlayerMovePredictionPacketPayload const&);
    CorrectPlayerMovePredictionPacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::CorrectPlayerMovePredictionPacketPayload& operator=(::CorrectPlayerMovePredictionPacketPayload&&);
    // NOLINTEND
};
