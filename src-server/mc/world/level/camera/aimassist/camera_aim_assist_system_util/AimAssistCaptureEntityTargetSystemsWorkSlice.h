#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistSystemUtil {

enum class AimAssistCaptureEntityTargetSystemsWorkSlice : int {
    FetchValidEntitiesInFrustumAndUpdateStatus = 0,
    WaitForResultToBeCreated = 1,
};

}
