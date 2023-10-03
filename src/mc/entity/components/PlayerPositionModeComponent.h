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

    PositionMode mPositionMode; // this+0x0

public:
    // prevent constructor by default
    PlayerPositionModeComponent& operator=(PlayerPositionModeComponent const&);
    PlayerPositionModeComponent(PlayerPositionModeComponent const&);
    PlayerPositionModeComponent();
};
