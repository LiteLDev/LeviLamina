#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/network/packet/PlayerAuthInputPacket.h"

struct ServerPlayerCurrentMovementComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 224, ::PlayerAuthInputPacket> mCurrentUpdate;
    ::ll::TypedStorage<4, 12, ::Vec3> mOldPosition;
    ::ll::TypedStorage<4, 8, ::Vec2> mPrevRotation;
    ::ll::TypedStorage<4, 8, ::Vec2> mNewRotation;
    ::ll::TypedStorage<1, 1, bool> mShouldCorrectForSneaking;
    // NOLINTEND

};
