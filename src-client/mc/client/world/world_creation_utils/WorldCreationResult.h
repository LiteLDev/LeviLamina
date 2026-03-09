#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WorldCreationUtils {

enum class WorldCreationResult : int {
    LowDiskSpace  = 0,
    Join          = 1,
    UploadToRealm = 2,
    ValidateDlc   = 3,
};

}
