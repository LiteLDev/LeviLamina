#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerComponent {
public:
    // prevent constructor by default
    PlayerComponent& operator=(PlayerComponent const&);
    PlayerComponent(PlayerComponent const&);
    PlayerComponent();
};
