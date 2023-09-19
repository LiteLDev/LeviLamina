#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractionModelComponent {
public:
    // prevent constructor by default
    PlayerInteractionModelComponent& operator=(PlayerInteractionModelComponent const&);
    PlayerInteractionModelComponent(PlayerInteractionModelComponent const&);
    PlayerInteractionModelComponent();
};
