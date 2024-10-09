#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputState {
public:
    // prevent constructor by default
    MoveInputState& operator=(MoveInputState const&);
    MoveInputState(MoveInputState const&);
    MoveInputState();
};
