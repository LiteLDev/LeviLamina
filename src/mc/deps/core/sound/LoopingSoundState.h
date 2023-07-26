#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LoopingSoundState {

public:
    // prevent constructor by default
    LoopingSoundState& operator=(LoopingSoundState const&) = delete;
    LoopingSoundState(LoopingSoundState const&)            = delete;
    LoopingSoundState()                                    = delete;
};
