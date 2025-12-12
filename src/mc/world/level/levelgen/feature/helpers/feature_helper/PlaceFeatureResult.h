#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FeatureHelper {

enum class PlaceFeatureResult : int {
    Success                = 0,
    FailureInvalidPosition = 1,
    FailureChunkNotLoaded  = 2,
};

}
