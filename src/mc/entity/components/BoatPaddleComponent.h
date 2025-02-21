#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct Paddle;
struct Tick;
// clang-format on

struct BoatPaddleComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 40, ::std::array<::Paddle, 2>> mPaddles;
    ::ll::TypedStorage<8, 8, ::Tick>                     mLocalTick;
    // NOLINTEND
};
