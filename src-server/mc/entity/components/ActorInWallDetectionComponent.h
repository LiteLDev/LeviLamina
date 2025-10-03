#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorInWallDetectionComponent {
public:
    // ActorInWallDetectionComponent inner types define
    enum class DetectionType : int {
        Default = 0,
        Shulker = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ActorInWallDetectionComponent::DetectionType> mDetectionType;
    ::ll::TypedStorage<1, 1, bool>                                           mWasInWallLastTick;
    ::ll::TypedStorage<4, 4, int>                                            mTicksInWall;
    // NOLINTEND
};
