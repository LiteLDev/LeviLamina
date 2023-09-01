#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerPositionModeComponent {
public:
    // PlayerPositionModeComponent inner types define
    enum class PositionMode {};

public:
    // prevent constructor by default
    PlayerPositionModeComponent& operator=(PlayerPositionModeComponent const&) = delete;
    PlayerPositionModeComponent(PlayerPositionModeComponent const&)            = delete;
    PlayerPositionModeComponent()                                              = delete;
};
