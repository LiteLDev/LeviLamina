#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RawMoveInputComponent {
public:
    // prevent constructor by default
    RawMoveInputComponent& operator=(RawMoveInputComponent const&);
    RawMoveInputComponent(RawMoveInputComponent const&);
    RawMoveInputComponent();
};
