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
    ::ll::UntypedStorage<4, 4> mUnk79995c;
    ::ll::UntypedStorage<1, 1> mUnkdadde5;
    ::ll::UntypedStorage<4, 4> mUnk949498;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorInWallDetectionComponent& operator=(ActorInWallDetectionComponent const&);
    ActorInWallDetectionComponent(ActorInWallDetectionComponent const&);
    ActorInWallDetectionComponent();
};
