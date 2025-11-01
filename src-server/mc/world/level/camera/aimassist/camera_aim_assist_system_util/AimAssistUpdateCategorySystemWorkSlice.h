#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CameraAimAssistSystemUtil {

enum class AimAssistUpdateCategorySystemWorkSlice : int {
    UpdateCategoryForNextAimAssistResult = 0,
    WaitForResultToBeCreated             = 1,
};

}
