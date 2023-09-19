#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PredictedMovementValues {
public:
    // prevent constructor by default
    PredictedMovementValues& operator=(PredictedMovementValues const&);
    PredictedMovementValues(PredictedMovementValues const&);
    PredictedMovementValues();

public:
    // NOLINTBEGIN
    // symbol: ?DEFAULT_INTERPOLATION_WINDOW_SIZE_IN_TICKS@PredictedMovementValues@@2_JB
    MCAPI static int64 const DEFAULT_INTERPOLATION_WINDOW_SIZE_IN_TICKS;

    // symbol: ?DEFAULT_USE_AGGRESSIVE_TICK_INTERVAL@PredictedMovementValues@@2_NB
    MCAPI static bool const DEFAULT_USE_AGGRESSIVE_TICK_INTERVAL;

    // symbol: ?SMALL_INTERPOLATION_WINDOW_SIZE_IN_TICKS@PredictedMovementValues@@2_JB
    MCAPI static int64 const SMALL_INTERPOLATION_WINDOW_SIZE_IN_TICKS;

    // NOLINTEND
};
