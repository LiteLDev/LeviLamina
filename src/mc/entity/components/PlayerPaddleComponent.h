#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerPaddleComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERPADDLECOMPONENT
public:
    PlayerPaddleComponent& operator=(PlayerPaddleComponent const&) = delete;
    PlayerPaddleComponent(PlayerPaddleComponent const&)            = delete;
    PlayerPaddleComponent()                                        = delete;
#endif

public:
};
