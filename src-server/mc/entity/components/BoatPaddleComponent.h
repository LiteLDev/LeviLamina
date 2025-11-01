#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/Paddle.h"
#include "mc/world/level/Tick.h"

struct BoatPaddleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::std::array<::Paddle, 2>> mPaddles;
    ::ll::TypedStorage<8, 8, ::Tick> mLocalTick;
    // NOLINTEND

};
