#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerPaddleComponent {

public:
    // prevent constructor by default
    PlayerPaddleComponent& operator=(PlayerPaddleComponent const&) = delete;
    PlayerPaddleComponent(PlayerPaddleComponent const&)            = delete;
    PlayerPaddleComponent()                                        = delete;
};
