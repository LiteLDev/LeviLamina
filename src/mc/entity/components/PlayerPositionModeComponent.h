#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerPositionModeComponent {
public:
    // PlayerPositionModeComponent inner types define
    enum class PositionMode : uchar {
        Normal      = 0,
        Respawn     = 1,
        Teleport    = 2,
        OnlyHeadRot = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::PlayerPositionModeComponent::PositionMode> mPositionMode;
    // NOLINTEND
};
