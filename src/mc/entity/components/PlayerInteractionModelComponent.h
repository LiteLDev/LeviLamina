#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInteractionModelComponent {

public:
    // prevent constructor by default
    PlayerInteractionModelComponent& operator=(PlayerInteractionModelComponent const&) = delete;
    PlayerInteractionModelComponent(PlayerInteractionModelComponent const&)            = delete;
    PlayerInteractionModelComponent()                                                  = delete;
};
