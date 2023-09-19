#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoopingSoundState {
public:
    // prevent constructor by default
    LoopingSoundState& operator=(LoopingSoundState const&);
    LoopingSoundState(LoopingSoundState const&);
    LoopingSoundState();
};
