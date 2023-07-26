#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputState {

public:
    // prevent constructor by default
    MoveInputState& operator=(MoveInputState const&) = delete;
    MoveInputState(MoveInputState const&)            = delete;
    MoveInputState()                                 = delete;

public:
    /**
     * @symbol ?wantsSneak\@MoveInputState\@\@QEBA_NXZ
     */
    MCAPI bool wantsSneak() const; // NOLINT
};
