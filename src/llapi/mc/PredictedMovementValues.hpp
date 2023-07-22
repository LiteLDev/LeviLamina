/**
 * @file  PredictedMovementValues.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure PredictedMovementValues.
 *
 */
struct PredictedMovementValues {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PREDICTEDMOVEMENTVALUES
public:
    struct PredictedMovementValues& operator=(struct PredictedMovementValues const &) = delete;
    PredictedMovementValues(struct PredictedMovementValues const &) = delete;
    PredictedMovementValues() = delete;
#endif

public:
    /**
     * @symbol  ?DEFAULT_INTERPOLATION_WINDOW_SIZE_IN_TICKS\@PredictedMovementValues\@\@2_JB
     */
    MCAPI static __int64 const DEFAULT_INTERPOLATION_WINDOW_SIZE_IN_TICKS;
    /**
     * @symbol  ?DEFAULT_USE_AGGRESSIVE_TICK_INTERVAL\@PredictedMovementValues\@\@2_NB
     */
    MCAPI static bool const DEFAULT_USE_AGGRESSIVE_TICK_INTERVAL;
    /**
     * @symbol  ?SMALL_INTERPOLATION_WINDOW_SIZE_IN_TICKS\@PredictedMovementValues\@\@2_JB
     */
    MCAPI static __int64 const SMALL_INTERPOLATION_WINDOW_SIZE_IN_TICKS;

};