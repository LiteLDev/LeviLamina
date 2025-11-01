#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorWalkAnimationComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mWalkAnimSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float> mWalkAnimSpeedO;
    ::ll::TypedStorage<4, 4, float> mWalkAnimSpeed;
    ::ll::TypedStorage<4, 4, float> mWalkAnimPos;
    ::ll::TypedStorage<4, 4, float> mMovementThisTick;
    // NOLINTEND

};
