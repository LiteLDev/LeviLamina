#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackTokenCancelState {

public:
    // prevent constructor by default
    CallbackTokenCancelState& operator=(CallbackTokenCancelState const&) = delete;
    CallbackTokenCancelState(CallbackTokenCancelState const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CallbackTokenCancelState\@\@QEAA\@XZ
     */
    MCAPI CallbackTokenCancelState();
    /**
     * @symbol ?wasCanceled\@CallbackTokenCancelState\@\@QEBA_NXZ
     */
    MCAPI bool wasCanceled() const;
    // NOLINTEND
};
