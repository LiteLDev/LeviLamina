#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RawMoveInputComponent {

public:
    // prevent constructor by default
    RawMoveInputComponent& operator=(RawMoveInputComponent const&) = delete;
    RawMoveInputComponent(RawMoveInputComponent const&)            = delete;
    RawMoveInputComponent()                                        = delete;
};
