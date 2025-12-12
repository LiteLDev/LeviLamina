#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistSystemUtil {

enum class AimAssistCaptureBlockPosSystemWorkSlice : int {
    ClearResultsAndScanTopHalf      = 0,
    ScanBottomHalfAccumulateResults = 1,
};

}
