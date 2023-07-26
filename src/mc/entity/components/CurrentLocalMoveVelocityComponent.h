#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CurrentLocalMoveVelocityComponent {

public:
    // prevent constructor by default
    CurrentLocalMoveVelocityComponent& operator=(CurrentLocalMoveVelocityComponent const&) = delete;
    CurrentLocalMoveVelocityComponent(CurrentLocalMoveVelocityComponent const&)            = delete;
    CurrentLocalMoveVelocityComponent()                                                    = delete;
};
