#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistSystemUtil {

enum class AimAssistCachePositionDataSystemWorkSlice : int {
    CachePositionDataForNextAimAssistResult = 0,
    WaitForResultToBeCreated = 1,
};

}
