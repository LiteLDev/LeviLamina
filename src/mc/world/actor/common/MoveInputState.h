#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MoveInputState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVEINPUTSTATE
public:
    MoveInputState& operator=(MoveInputState const&) = delete;
    MoveInputState(MoveInputState const&)            = delete;
    MoveInputState()                                 = delete;
#endif

public:
    /**
     * @symbol ?wantsSneak\@MoveInputState\@\@QEBA_NXZ
     */
    MCAPI bool wantsSneak() const;
};
