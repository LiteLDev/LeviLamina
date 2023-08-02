#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerPositionModeComponent {
public:
    // PlayerPositionModeComponent inner types define
    enum class PositionMode {
        Normal      = 0,
        Respawn     = 1,
        Teleport    = 2,
        OnlyHeadRot = 3,
    };

public:
    // prevent constructor by default
    PlayerPositionModeComponent& operator=(PlayerPositionModeComponent const&) = delete;
    PlayerPositionModeComponent(PlayerPositionModeComponent const&)            = delete;
    PlayerPositionModeComponent()                                              = delete;
};
