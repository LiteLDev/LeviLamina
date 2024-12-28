#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistSystemUtil {

enum class AimAssistCreateResultSystemWorkSlice : int {
    WaitForAllBlockPosResultsToBeCaptured    = 0,
    CreateAimAssistResultFromBlockPosResults = 1,
};

}
