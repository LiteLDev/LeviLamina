#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PredictedMovementValues {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTVALUES
public:
    PredictedMovementValues& operator=(PredictedMovementValues const&) = delete;
    PredictedMovementValues(PredictedMovementValues const&)            = delete;
    PredictedMovementValues()                                          = delete;
#endif

public:
    /**
     * @symbol ?DEFAULT_INTERPOLATION_WINDOW_SIZE_IN_TICKS\@PredictedMovementValues\@\@2_JB
     */
    MCAPI static __int64 const DEFAULT_INTERPOLATION_WINDOW_SIZE_IN_TICKS;
    /**
     * @symbol ?DEFAULT_USE_AGGRESSIVE_TICK_INTERVAL\@PredictedMovementValues\@\@2_NB
     */
    MCAPI static bool const DEFAULT_USE_AGGRESSIVE_TICK_INTERVAL;
    /**
     * @symbol ?SMALL_INTERPOLATION_WINDOW_SIZE_IN_TICKS\@PredictedMovementValues\@\@2_JB
     */
    MCAPI static __int64 const SMALL_INTERPOLATION_WINDOW_SIZE_IN_TICKS;
};
