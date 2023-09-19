#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputModeComponent {
public:
    // prevent constructor by default
    PlayerInputModeComponent& operator=(PlayerInputModeComponent const&);
    PlayerInputModeComponent(PlayerInputModeComponent const&);
    PlayerInputModeComponent();
};
