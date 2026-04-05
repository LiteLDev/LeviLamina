#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PredictedMovementSystem {

struct SystemUniforms {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                    mEnableMovementPredictionLogging;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mNow;
    // NOLINTEND
};

} // namespace PredictedMovementSystem
