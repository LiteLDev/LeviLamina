#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputModeComponent {

public:
    // prevent constructor by default
    PlayerInputModeComponent& operator=(PlayerInputModeComponent const&) = delete;
    PlayerInputModeComponent(PlayerInputModeComponent const&)            = delete;
    PlayerInputModeComponent()                                           = delete;
};
