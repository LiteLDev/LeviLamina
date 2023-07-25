#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CallbackTokenCancelState {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALLBACKTOKENCANCELSTATE
public:
    CallbackTokenCancelState& operator=(CallbackTokenCancelState const&) = delete;
    CallbackTokenCancelState(CallbackTokenCancelState const&)            = delete;
#endif

public:
    /**
     * @symbol ??0CallbackTokenCancelState\@\@QEAA\@XZ
     */
    MCAPI CallbackTokenCancelState();
    /**
     * @symbol ?wasCanceled\@CallbackTokenCancelState\@\@QEBA_NXZ
     */
    MCAPI bool wasCanceled() const;
};
