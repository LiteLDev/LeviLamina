#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistSystemUtil {

enum class AimAssistCacheFrustumSystemWorkSlice : int {
    CreateFrustum            = 0,
    WaitForResultToBeCreated = 1,
};

}
