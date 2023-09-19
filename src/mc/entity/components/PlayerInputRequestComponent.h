#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInputRequestComponent {
public:
    // prevent constructor by default
    PlayerInputRequestComponent& operator=(PlayerInputRequestComponent const&);
    PlayerInputRequestComponent(PlayerInputRequestComponent const&);
    PlayerInputRequestComponent();
};
