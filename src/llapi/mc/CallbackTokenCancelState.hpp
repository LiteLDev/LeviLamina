/**
 * @file  CallbackTokenCancelState.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CallbackTokenCancelState.
 *
 */
class CallbackTokenCancelState {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CALLBACKTOKENCANCELSTATE
public:
    class CallbackTokenCancelState& operator=(class CallbackTokenCancelState const &) = delete;
    CallbackTokenCancelState(class CallbackTokenCancelState const &) = delete;
#endif

public:
    /**
     * @symbol  ??0CallbackTokenCancelState\@\@QEAA\@XZ
     */
    MCAPI CallbackTokenCancelState();
    /**
     * @symbol  ?wasCanceled\@CallbackTokenCancelState\@\@QEBA_NXZ
     */
    MCAPI bool wasCanceled() const;

};